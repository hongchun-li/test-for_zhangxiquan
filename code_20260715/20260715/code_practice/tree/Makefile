SRC = test.o tree.o linkqueue.o


all:test
	
test:$(SRC) test.o
	gcc $^ -o $@

%.o:%.c
	gcc -c $< -o $@


.PHONY:clean

clean:
	rm *.o test
