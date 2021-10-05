all: arrayfunctions.o
	gcc -o arrayfunctions arrayfunctions.o

arrayfunctions.o: arrayfunctions.c
	gcc -c arrayfunctions.c

run:
	./arrayfunctions

clean:
	rm arrayfunctions
	rm *.o
