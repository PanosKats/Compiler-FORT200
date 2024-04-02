all: compiler

parser.tab.c syntax.tab.h: syntax.y extra/hashtbl.h
	bison -d -v syntax.y

lex.yy.c: lexer.l syntax.tab.h
	flex lexer.l

compiler: lex.yy.c syntax.tab.c extra/hashtbl.c extra/hashtbl.h
	gcc -o compiler lex.yy.c syntax.tab.c extra/hashtbl.c

clean:
	rm -f compiler lex.yy.c syntax.tab.c syntax.tab.h suntax.output