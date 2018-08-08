#Makefile for "Alg_Sort" C++ application
#Created by A random guy from LP :v (me) 03/08/2018

PROG = bin/Alg_Sort
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic -std=c++11 -Iinclude
OBJS = main.o Selection.o Insertion.o
RM = -f *.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)
	mv *.o build/

main.o : 
	$(CC) $(CPPFLAGS) -c src/main.cpp

Selection.o : include/Selection.hpp
	$(CC) $(CPPFLAGS) -c src/Selection.cpp

Insertion.o : include/Insertion.hpp
	$(CC) $(CPPFLAGS) -c src/Insertion.cpp

clean:
	rm -f $(PROG) build/*.o