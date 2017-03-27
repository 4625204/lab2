main: main.o R.o
	g++ -o main main.o R.o -lm
RR: R.cpp R.h
	g++ -c R.cpp 
MM: main.cpp R.h
	g++ -c main.cpp
