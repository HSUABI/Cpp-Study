all: main

main.o:
	g++ -c -o main.o main.cpp --std=c++11

main: main.o
	g++ -o main main.o --std=c++11

clean:
	rm -rf main
	rm -r *.o