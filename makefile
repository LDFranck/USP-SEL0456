ALL = main
all: $(ALL)

main: hello.o myfunctions.o myfunctions2.o
	gcc $^ -lm -o $@ 
	
%.o: %.c
	gcc -c $<

clear_o:
	rm -f *.o

clear_all: clear_o
	rm -f $(ALL)
	

