CC=gcc
AR=ar
FLAGS= -Wall -g 
LM = -lm

all: connections

connections: main.o libconnections.a
	$(CC) $(FLAGS) -o connections main.o libconnections.a 

libconnections.a: my_mat.o
	$(AR) -rcs libconnections.a my_mat.o


main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c 
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c



clean:
	rm -f *.o *.a connections
