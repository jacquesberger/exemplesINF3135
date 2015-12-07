CC = gcc
OPTIONS = -Wall
EXE = hilo
OBJS = hilo.o hilopriv.o main.o

.SUFFIXES: .c .o

all: link

compile: $(OBJS)

.c.o:
	$(CC) $(OPTIONS) -c $*.c

link: compile
	$(CC) $(OBJS) -o $(EXE)

clean:
	rm $(EXE)
	rm $(OBJS)
