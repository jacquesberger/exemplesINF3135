main:
	gcc main.c pile.c trim.c -o exec

units:
	gcc pile.c pileTests.c tests.c trim.c trimTests.c -o unittests
	./unittests

fct: main
	./ftests.sh

tests: units fct
	
