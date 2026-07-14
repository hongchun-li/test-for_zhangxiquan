SRC = test.o
SRC += sqlist.o

all:test

test:$(SRC)
	gcc $(SRC) -o test

sqlist.o:sqlist.c
	gcc -c sqlist.c -o sqlist.o

test.o:test.c
	gcc -c test.c -o test.o

.PHONY:clean

clean:
	rm *.o test
