.PHONY = all clean
#Defining Macros
AR = ar
CC = gcc
FLAGS = -Wall -g

all: connections

#Creating Program
connections: libmymat.a main.o
	$(CC) $(FLAGS) -o connections main.o libmymat.a
#Creating Static Library
libmymat.a: my_mat.o
	$(AR) -rc libmymat.a my_mat.o
#Creating Objects
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c
main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

clean:
	rm -f *.o *.a connections