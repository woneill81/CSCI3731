all: hw3B

swap.o: swap.cc swap.h
	g++ -c -Werror swap.cc

main.o: main.cc swap.h
	g++ -c -Werror main.cc
	
hw3B: main.o swap.o
	g++ -o hw3B main.o swap.o
		