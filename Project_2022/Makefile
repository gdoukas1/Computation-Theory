all: mycompiler

mycompiler: myanalyzer.tab.c lex.yy.c
	gcc -o mycompiler lex.yy.c myanalyzer.tab.c cgen.c -lfl

myanalyzer.tab.c:
	bison -d -v -r all myanalyzer.y

lex.yy.c:
	#flex test/mylexer_test.l 
	flex mylexer.l 

clean:
	rm lex.yy.c\
		myanalyzer.tab.c\
		myanalyzer.tab.h\
		myanalyzer.output\
		mycompiler
		

clean_tests: 
	rm output.c program

tests:
	./mycompiler < test/prime.th > output.c \
	#helloworld, useless, prime, qsort, qsortWithComp, bookstore, wrong \
	gcc output.c -o program \

correct:
	./mycompiler < correct1.th > correct1.c
	./mycompiler < correct2.th > correct2.c
	gcc correct1.c -o correct1 
	gcc correct2.c -o correct2