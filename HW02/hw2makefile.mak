all: hw2program

hw2program.o: hw2program.cc 
	g++ -c -Werror hw2program.cc
	
main: hw2program.o 
	g++ -o hw2program hw2program.o 