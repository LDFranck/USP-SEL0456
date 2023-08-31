all:

hello: hello.o
	gcc hello.o -lm -o hello

clean:
	rm -f hello hello.o
	
hello.o: hello.c
	gcc -c hello.c
