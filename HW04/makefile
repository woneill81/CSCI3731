
all: ppm2jpeg
	
main.o: main.cc reader.h writer.h
	g++ -c -Werror main.cc
	
read.o: read.cc reader.h
	g++ -c -Werror read.cc
	
write.o: write.cc writer.h
	g++ -c -Werror write.cc

ppm2jpeg: main.o read.o write.o
	g++ -o ppm2jpeg main.o read.o write.o
