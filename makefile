main : main.o
	g++ -o main main.o
main.o :
	g++ -c main.cpp
clean:
	rm main main.o
