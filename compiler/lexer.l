%{

    
    #include <stdio.h>
    #include <stdlib.h>
	#include <string.h>
	#include "syntax.tab.h"

    void token_print(int token_id);

	char str_buf[256];
	char comm_buf[256];
	char str_esc[256];

	char strtochar(const char *str);
	void stresc(char *original_string, char *final_string);
	static int strtoint(const char* str);
	static float strtoreal(const char* str);

	
%}

%option noyywrap

%option case-insensitive

%option yylineno

%x STRING
%x COMMENT




id		  	_?[A-Z]([0-9A-Z_]*[A-Z0-9])?|_([A-Z]([0-9A-Z_]*_*[A-Z0-9])?)_   
iconst    	0H[A-F1-9][A-F0-9]*|0B1[01]*|[1-9][0-9]*|0       
rconst    	([0-9]*\.[0-9]*|[0-9]+\.*)[A-F0-9]+|0B1[01]*\.|0B[01]*\.[01]+|[1-9][0-9]*E-?[1-9][0-9]*|([1-9][0-9]*)?\.([1-9][0-9]*(E-?[1-9][0-9]*)?|0)|0\.0
rconst2     2\.
lconst   	.true.|.false.          
cconst    	\'([\40-\176]|\\[nftrbv])\'       
listfunc    C(AD*|D+)R        


%%



"FUNCTION"               { token_print(T_FUNCTION);  return T_FUNCTION; }
"SUBROUTINE"             { token_print(T_SUBROUTINE);    return T_SUBROUTINE; }
"END"                    { token_print(T_END);     return T_END; }
"INTEGER"                { token_print(T_INTEGER);    return T_INTEGER; }
"REAL"                   { token_print(T_REAL);      return T_REAL; }
"LOGICAL"                { token_print(T_LOGICAL);       return T_LOGICAL; }
"CHARACTER"              { token_print(T_CHARACTER);   return T_CHARACTER; }
"COMPLEX"                { token_print(T_COMPLEX);      return T_COMPLEX; }
"RECORD"                 { token_print(T_RECORD);  return T_RECORD; }
"ENDREC"                 { token_print(T_ENDREC); return T_ENDREC; }
"LIST"                   { token_print(T_LIST); return T_LIST; }
"DATA"                   { token_print(T_DATA);  return T_DATA; }
"CONTINUE"               { token_print(T_CONTINUE);   return T_CONTINUE; }
"GOTO"                   { token_print(T_GOTO);  return T_GOTO; }
"CALL"                   { token_print(T_CALL);     return T_CALL; }
"READ"                   { token_print(T_READ);    return T_READ; }
"WRITE"                  { token_print(T_WRITE);      return T_WRITE; }
"NEW"                    { token_print(T_NEW);       return T_NEW; }
"LENGTH"                 { token_print(T_LENGTH);     return T_LENGTH; }
"IF"                     { token_print(T_IF);     return T_IF; }
"THEN"                   { token_print(T_THEN);     return T_THEN; }
"ELSE"                   { token_print(T_ELSE);     return T_ELSE; }
"ENDIF"                  { token_print(T_ENDIF);		return T_ENDIF; }
"DO"                     { token_print(T_DO);	return T_DO; }
"ENDDO"                  { token_print(T_ENDDO);       return T_ENDDO; }
"STOP"                   { token_print(T_STOP);     return T_STOP; }
"RETURN"                 { token_print(T_RETURN);     return T_RETURN; }



".OR."                                      { token_print(T_OROP);        return T_OROP; }
".AND."                                     { token_print(T_ANDOP);        return T_ANDOP; }
".NOT."                                     { token_print(T_NOTOP);        return T_NOTOP; }
".GT."|".GE."|".LT."|".LE."|".EQ."|".NE."   { token_print(T_RELOP);       return T_RELOP; }
"+"|"-"                                     { token_print(T_ADDOP);       return T_ADDOP; }
"*"                                         { token_print(T_MULOP);       return T_MULOP;}
"/"                                         { token_print(T_DIVOP);       return T_DIVOP;}
"**"                                        { token_print(T_POWEROP);       return T_POWEROP;}




{listfunc}    		{ token_print(T_LISTFUNC);	yylval.id=strdup(yytext);  return T_LISTFUNC; }
{id}				{ token_print(T_ID);     yylval.id=strdup(yytext); 		  return T_ID; }	
{iconst}    		{ token_print(T_ICONST); yylval.iconst=strtoint(yytext);   return T_ICONST; }
{rconst}    		{ token_print(T_RCONST); yylval.rconst=strtoreal(yytext);  return T_RCONST; }
{rconst2}    		{ token_print(T_RCONST); yylval.rconst=strtoreal(yytext);  return T_RCONST; }
{lconst}    		{ token_print(T_LCONST); yylval.lconst=strtoint(yytext);   return T_LCONST; }
{cconst}    		{ token_print(T_CCONST); yylval.cconst=strtochar(yytext);  return T_CCONST; }




"("                 { token_print(T_LPAREN); return T_LPAREN; }
")"                 { token_print(T_RPAREN); return T_RPAREN; }
","                 { token_print(T_COMMA);  return T_COMMA; }
"="                 { token_print(T_ASSIGN); return T_ASSIGN; }
"."                 { token_print(T_DOT);    return T_DOT;}
":"                 { token_print(T_COLON);  return T_COLON; }
"["                 { token_print(T_LBRACK); return T_LBRACK; }
"]"                 { token_print(T_RBRACK); return T_RBRACK; }






\"                  { strcpy(str_buf,  ""); memset(str_esc, 0, sizeof(str_esc));yylval.string=strdup(str_esc); BEGIN(STRING); }
<STRING>\"          { stresc(str_buf, str_esc); printf("Found token \'%s\' (%d) at line %d\n", str_esc,T_STRING, yylineno); BEGIN(INITIAL); return T_STRING; }
<STRING>\n          { printf("\n[ERROR] New line without \\\n"); }
<STRING>\\\n[ ]*    { /* Δεν θέλουμε να αποθηκεύσουμε την αλλαγή γραμμής ως περιεχόμενο του string, όπως και τα space που πιθανώς υπάρχουν στην αρχή της επόμενης γραμμής. */ }
<STRING>\\[ ]       { printf("\n[ERROR] \\ in string, but not at the end of the line."); }
<STRING>\\[^ ]      { strcat(str_buf, yytext); }
<STRING>[^\\"]      { strcat(str_buf, yytext); }
<STRING><<EOF>>     { printf("\n[ERROR] EOF in string."); }
<STRING>.           { printf("\n[ERROR] Unrecognised character in string: %s", yytext); }


"$"                  	   { printf("Comment found \n"); BEGIN(COMMENT); }
<COMMENT>(\n|\r\n)         {  BEGIN(INITIAL); printf("Comment ended \n"); }
<COMMENT>.                 {      };






[ \t]               {       }
[\n]                {       }
<<EOF>>				{ token_print(T_EOF); return T_EOF; }
.					{ printf("Unrecognised character at line %d!\n", yylineno); }


%%
static int strtoint(const char* str) {

    if (!strncmp(str, "0B", 2) )
	{  
		return (int) strtoll(&str[2], NULL, 2);
	}
    else if (!strncmp(str, "0H", 2) ){

		return (int) strtoll(&str[2], NULL, 16);
	}
	
    return strtol(str, NULL, 10);

}

static float strtoreal(const char* str) {

    char dot = '.';
	char *Decimal_part;
	char Integer_part[10];
	char Whole_Number[50];
	long int int_Integer_part;
	long int int_Decimal_part;
    int indexOfDot;
	
	
	if (!strncmp(str, "0B", 2) ){

		Decimal_part= strchr(str , dot); 
	
		indexOfDot = Decimal_part - str ;

		strncpy(Integer_part,&str[2],indexOfDot-2);
	
	    int_Integer_part = strtol(Integer_part,NULL,2 );
	    int_Decimal_part = strtol (&Decimal_part[1],NULL,2);
		sprintf(Whole_Number,"%ld%c%ld",int_Integer_part,dot,int_Decimal_part);
		return atof(Whole_Number);
	}
	else if(!strncmp(str, "0H", 2) ){
		Decimal_part= strchr(str , dot); 
	
		indexOfDot = Decimal_part - str ;

		strncpy(Integer_part,&str[2],indexOfDot-2);

		int_Integer_part = strtol(Integer_part,NULL,16 );
	    int_Decimal_part = strtol (&Decimal_part[1],NULL,16);
		sprintf(Whole_Number,"%ld%c%ld",int_Integer_part,dot,int_Decimal_part);
		return atof(Whole_Number);

	}else{
		return atof(str);
	}
	
}








void token_print(int token_id) {

    if(token_id == T_ICONST){
		printf("Found token \'%s\' (%d) at line %d in Base 10 equals %d\n", yytext, token_id, yylineno,strtoint(yytext));
	}
	else if(token_id == T_RCONST){
		printf("Found token \'%s\' (%d) at line %d in Base 10 equals %f\n", yytext, token_id, yylineno,strtoreal(yytext));
	}
	else if(token_id == T_CCONST){
		printf("Found token \'\%c\' (%d) at line %d\n", strtochar(yytext), token_id, yylineno);
	}
	else{
		printf("Found token \'%s\' (%d) at line %d\n", yytext, token_id, yylineno);
	}


    
}

char strtochar(const char *str) {
    if (str[1] == '\\') {
        switch (str[2]) {
            case 'n': return '\n';
            case 'f': return '\f';
            case 't': return '\t';
            case 'r': return '\r';
            case 'b': return '\b';
            case 'v': return '\v';
            case '0': return '\0';
            default:
                printf("\n[ERROR] Unknown escaped character: \\%c", str[2]);
                return '\0';
        }
    } else {
        return str[1];
    }
}

void stresc(char *original_string, char *final_string) {
    int i, j;

    for (i = 0, j = 0; i < strlen(original_string); i++, j++) {
        if (original_string[i] == '\\') {
            switch (original_string[i + 1]) {
                case 'n': final_string[j] = '\n'; break;
                case 'f': final_string[j] = '\f'; break;
                case 't': final_string[j] = '\t'; break;
                case 'r': final_string[j] = '\r'; break;
                case 'b': final_string[j] = '\b'; break;
                case 'v': final_string[j] = '\v'; break;
                case '\\': final_string[j] = '\\'; break;
                case '\'': final_string[j] = '\''; break;
                case '"': final_string[j] = '"'; break;
                default:
                    printf("\n[ERROR] Unknown escaped character: \\%c", original_string[i + 1]);
                    return;
            }

            i++;
        } else {
            final_string[j] = original_string[i];
        }
    }
}