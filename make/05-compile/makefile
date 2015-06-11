CC = gcc
OPTIONS = -Wall
EXE = hilo

all: link

compile: hilo.o hilopriv.o main.o

hilo.o: hilo.c hilopriv.h hilo.h
	$(CC) $(OPTIONS) -c hilo.c

hilopriv.o: hilopriv.c hilopriv.h
	$(CC) $(OPTIONS) -c hilopriv.c

main.o: main.c main.h hilo.h
	$(CC) $(OPTIONS) -c main.c

link: compile
	$(CC) *.o -o $(EXE)

clean:
	rm $(EXE)
	rm *.o

start: link
	./$(EXE)
