CC = gcc
CFLAGS  = -g -Wall

default: perm

perm:  permutation.o
	$(CC) $(CFLAGS) -o perm permutation.o

permutation.o:  permutation.c lib_fact.h
	$(CC) $(CFLAGS) -c permutation.c

clean:
	$(RM) perm *.o *~


