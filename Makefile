.PHONY = all clean
#Defining Macros
CC = gcc
FLAGS = -Wall -g

all: connections

#Creating Program
connections: my_mat.o  main.o
	$(CC) $(FLAGS) -o connections my_mat.o  main.o
#Creating Objects
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c
main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

clean:
	rm -f *.o *.a connections