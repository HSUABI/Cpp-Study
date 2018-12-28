all: main

main.o:
	g++ -c -o main.o main.cpp

main: main.o
	g++ -o main main.o

clean:
	rm -rf main
	rm -r *.o