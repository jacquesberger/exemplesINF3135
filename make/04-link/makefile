CC = gcc
OPTIONS = -Wall
EXE = hilo

all: start

compile:
	$(CC) $(OPTIONS) -c *.c

link: compile
	$(CC) *.o -o $(EXE)

clean:
	rm $(EXE)
	rm *.o

start: link
	./$(EXE)
