CC = gcc
CFLAGS = -Werror -Wall -pedantic 

all : main

main : main.o sorting.o
	$(CC) $(CFLAGS) -o main main.o sorting.o

main.o : main.c sorting.h
	$(CC) $(CFLAGS) -c main.c

sorting.o : sorting.c sorting.h
	$(CC) $(CFLAGS) -c sorting.c

clean:
	rm -f *.o
	rm -f main