all: prog

prog: main.o function.o
	g++ -o prog main.o function.o

%.o: %.cpp
	g++ -c $^ -o $@

clean:
	-rm -rf *.o prog
