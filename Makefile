#  Julio Fernandez Makefile for p4

p3:  main.o
	g++  -o p4 main.o

main.o:  main.cpp
	g++  -c main.cpp

clean:
	rm -f p4 *.o *~
