all: list.o main.c
	gcc -o list list.o main.c

list.o: list.c list.h
	gcc -c list.c list.h

run: all
	./list

clean:
	rm list.o
	rm list.h.gch
