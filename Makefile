
output: main.o Furniture.o Table.o Bed.o
	g++ main.o Furniture.o Table.o Bed.o -o output

main.o: main.cpp
	g++ -c main.cpp


Furniture.o: Furniture.cpp Furniture.h 
	g++ -c Furniture.cpp

Table.o: Table.cpp Table.h 
	g++ -c Table.cpp

Bed.o: Bed.cpp Bed.h
	g++ -c Bed.cpp 

