%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "extra/hashtbl.h"

#define MAX_PARSER_ERRORS   5

HASHTBL *symbol_table;
int scope = 0;

extern FILE *yyin;
extern int yylineno;
extern int yylex();
extern int yyval();

int error_counter;
void yyerror(const char *err);

%}

%define parse.error verbose 

%union {
    char *id;
    int iconst;
    float rconst;
    char cconst;
    char *string;
    int lconst;
    int listfunc;
}

%token T_FUNCTION 
%token T_SUBROUTINE 
%token T_END 
%token T_INTEGER 
%token T_REAL 
%token T_LOGICAL 
%token T_CHARACTER 
%token T_COMPLEX 
%token T_RECORD 
%token T_ENDREC 
%token T_LIST  
%token T_DATA    
%token T_CONTINUE 
%token T_GOTO 
%token T_CALL 
%token T_READ  
%token T_WRITE 
%token T_NEW 
%token T_LENGTH 
%token T_IF 
%token T_THEN  
%token T_ELSE 
%token T_ENDIF 
%token T_DO     
%token T_ENDDO 
%token T_STOP 
%token T_RETURN 


%token T_OROP 
%token T_ANDOP 
%token T_NOTOP 
%token T_RELOP 
%token T_ADDOP 
%token T_MULOP 
%token T_DIVOP 
%token T_POWEROP 


%token T_LPAREN 
%token T_RPAREN 
%token T_COMMA 
%token T_ASSIGN 
%token T_DOT 
%token T_COLON 
%token T_LBRACK 
%token T_RBRACK 




%token T_EOF 0

%token <id>     T_ID 
%token <iconst> T_ICONST 
%token <bconst> T_LCONST
%token <rconst> T_RCONST 
%token <string> T_STRING 
%token <cconst> T_CCONST 
%token <listfunc> T_LISTFUNC 

%token T_COMM 



%left T_OROP T_ANDOP 
%left T_RELOP 

%left T_ADDOP T_MULOP T_DIVOP T_POWEROP T_NOTOP



   


%%

program:        body T_END subprograms
                                
body:           declarations statements
                
declarations:   declarations type vars
                | declarations T_RECORD fields T_ENDREC vars
                | declarations T_DATA vals
                | %empty
                
type : T_INTEGER | T_REAL | T_LOGICAL | T_CHARACTER | T_COMPLEX
            
vars : vars T_COMMA undef_variable
            | undef_variable
            
undef_variable: T_LIST undef_variable
            | T_ID T_LPAREN dims T_RPAREN
            | T_ID
            
dims: dims T_COMMA dim
            | dim
            
dim: T_ICONST | T_ID

fields: fields field
            | field

field: type vars
            | T_RECORD fields T_ENDREC vars

vals: vals T_COMMA T_ID value_list
            | T_ID value_list

value_list: T_DIVOP values T_DIVOP

values: values T_COMMA value
            | value

value: sign constant
            | T_STRING

sign: T_ADDOP | %empty

constant: simple_constant
            | complex_constant

simple_constant: T_ICONST | T_RCONST | T_LCONST | T_CCONST

complex_constant: T_LPAREN T_RCONST T_COLON sign T_RCONST T_RPAREN

statements: statements labeled_statement
            | labeled_statement

labeled_statement: label statement
            | statement

label: T_ICONST

statement: simple_statement
            | compound_statement

simple_statement: assignment
            | goto_statement
            | if_statement
            | subroutine_call
            | io_statement
            | T_CONTINUE
            | T_RETURN
            | T_STOP

assignment: variable T_ASSIGN expression
            | variable T_ASSIGN T_STRING

variable: variable T_DOT T_ID
            | variable T_LPAREN expressions T_RPAREN
            | T_LISTFUNC T_LPAREN expression T_RPAREN
            | T_ID

expressions: expressions T_COMMA expression
            | expression

expression: expression T_OROP expression
            | expression T_ANDOP expression
            | expression T_RELOP expression
            | expression T_ADDOP expression
            | expression T_MULOP expression
            | expression T_DIVOP expression
            | expression T_POWEROP expression
            | T_NOTOP expression
            | T_ADDOP expression
            | variable
            | simple_constant
            | T_LENGTH T_LPAREN expression T_RPAREN
            | T_NEW T_LPAREN expression T_RPAREN
            | T_LPAREN expression T_RPAREN
            | T_LPAREN expression T_COLON expression T_RPAREN
            | listexpression

listexpression: T_LBRACK expressions T_RBRACK
            | T_LBRACK T_RBRACK

goto_statement: T_GOTO label
            | T_GOTO T_ID T_COMMA T_LPAREN labels T_RPAREN

labels: labels T_COMMA label
            | label

if_statement: T_IF T_LPAREN expression T_RPAREN label T_COMMA label T_COMMA label
            | T_IF T_LPAREN expression T_RPAREN simple_statement

subroutine_call: T_CALL variable

io_statement: T_READ read_list
            | T_WRITE write_list

read_list: read_list T_COMMA read_item
            | read_item

read_item: variable
            | T_LPAREN read_list T_COMMA T_ID T_ASSIGN iter_space T_RPAREN

iter_space: expression T_COMMA expression step

step: T_COMMA expression
            | %empty
            
write_list: write_list T_COMMA write_item
            | write_item

write_item: expression
            | T_LPAREN write_list T_COMMA T_ID T_ASSIGN iter_space T_RPAREN
            | T_STRING

compound_statement: branch_statement
            | loop_statement

branch_statement: T_IF T_LPAREN expression T_RPAREN T_THEN body tail

tail: T_ELSE body T_ENDIF
            | T_ENDIF

loop_statement: T_DO T_ID T_ASSIGN iter_space body T_ENDDO

subprograms: subprograms subprogram
            | %empty

subprogram: header body T_END

header: type T_FUNCTION T_ID T_LPAREN formal_parameters T_RPAREN
            | T_LIST T_FUNCTION T_ID T_LPAREN formal_parameters T_RPAREN
            | T_SUBROUTINE T_ID T_LPAREN formal_parameters T_RPAREN
            | T_SUBROUTINE T_ID

formal_parameters: type vars T_COMMA formal_parameters
            | type vars

%%


int main(int argc, char *argv[]){
	int token;        
	if(argc > 1){       
		yyin = fopen(argv[1], "r");
		if (yyin == NULL){
			perror ("Error opening file"); 
			return -1;
		}
	 }        

    symbol_table = hashtbl_create(100, NULL);

    yyparse();

    hashtbl_get(symbol_table, scope);
    hashtbl_destroy(symbol_table);
 
	return 0;
}

void yyerror(const char *err){

    error_counter++;

    printf("\n[LINE %d] %s", yylineno, err);

    if (error_counter == MAX_PARSER_ERRORS) {   
        printf("\nMax parser error limit reached (%d)\n", MAX_PARSER_ERRORS);
        exit(EXIT_FAILURE);
    }
}
