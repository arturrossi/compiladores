etapa3: main.o lex.yy.o y.tab.o hash.o ast.o
	gcc main.o lex.yy.o y.tab.o hash.o ast.o -o etapa3

main.o: main.c
	gcc -c main.c

hash.o: hash.c
	gcc -c hash.c

y.tab.o: y.tab.c
	gcc -c y.tab.c

ast.o: ast.c
	gcc -c ast.c

y.tab.c: parser.y
	yacc -d -v parser.y

lex.yy.c: scanner.l
	lex scanner.l

clean:
	rm etapa3 y.tab.c lex.yy.c *.o