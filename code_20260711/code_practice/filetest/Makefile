test:main.o fun.o
	gcc main.o fun.o -o test
fun.o:fun.c
	gcc -c fun.c -o fun.o

main.o:main.c
	gcc -c main.c -o main.o
.PHONY:clean

clean:
	rm *.o test
