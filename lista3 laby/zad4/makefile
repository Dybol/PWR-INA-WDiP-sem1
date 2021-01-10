# Makefile

all: main

main: main.o directions.o distance.o
	clang -o main main.o directions.o distance.o -lm
main.o: main.c
	clang -c main.c
directions.o: directions.c
	clang -c directions.c
distance.o: distance.c
	clang -c distance.c

clean:
	rm -f main *.o *~