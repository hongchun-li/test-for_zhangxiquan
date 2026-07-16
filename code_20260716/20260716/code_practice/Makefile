SRC = test.o sort_int_array.o
all:test

test:$(SRC) test.o
	gcc $^ -o $@

%.o:%.c
	gcc -c $< -o $@

.PHONY:clean

clean:
	rm *.o test
