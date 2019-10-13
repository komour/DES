all: main

run: DES
	./DES

DES: main.o Des.o
	g++ $^ -o DES

Des.o: Des.cpp
	g++ -c $^

main.o: main.cpp
	g++ -c $^

clean:
	rm -rf DES *.o
