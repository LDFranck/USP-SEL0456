TARGET = main

all: $(TARGET)

SRC = $(wildcard *.c)
$(TARGET): $(patsubst %.c, %.o, $(SRC))
	gcc $^ -o $@
	
%.o: %.c
	gcc -c $<

clean_all: clean_obj
	rm -f $(TARGET)

clean_obj:
	rm -f *.o
