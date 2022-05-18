all: mycompiler

mycompiler: myanalyzer.tab.c lex.yy.c
	gcc -o mycompiler lex.yy.c myanalyzer.tab.c cgen.c -lfl

myanalyzer.tab.c:
	bison -d -v -r all myanalyzer.y

lex.yy.c:
	flex mylexer.l 

clean:
	rm lex.yy.c myanalyzer.tab.c myanalyzer.tab.h  myanalyzer.output mycompiler

tests:
	./mycompiler < helloWorld.th > helloWorld.c
	#gcc helloWorld.c -o helloWorld