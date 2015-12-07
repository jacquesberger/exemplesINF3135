CC = gcc
OPTIONS = -Wall
EXE = hilo

all: link

compile:
	$(CC) $(OPTIONS) -c *.c

link: compile
	$(CC) *.o -o $(EXE)

clean:
	rm $(EXE)
	rm *.o
