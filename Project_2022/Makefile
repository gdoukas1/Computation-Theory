all: mycompiler

mycompiler: myanalyzer.tab.c lex.yy.c
	gcc -o mycompiler lex.yy.c myanalyzer.tab.c cgen.c -lfl

myanalyzer.tab.c:
	bison -d -v -r all myanalyzer.y

lex.yy.c:
	flex mylexer_v0.l 
	#flex mylexer.l 
clean:
	rm lex.yy.c myanalyzer.tab.c myanalyzer.tab.h  myanalyzer.output mycompiler

tests:
	./mycompiler < .th > output.c
	#gcc helloWorld.c -o helloWorld