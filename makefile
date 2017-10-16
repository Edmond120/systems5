all: list.o main.c
	gcc -o list list.o main.c

list.o: list.c list.h
	gcc -c list.c list.h

clean:
	rm list.o
	rm list.h.gch

run: all
	./list
