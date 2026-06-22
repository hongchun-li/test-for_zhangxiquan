#函数
#SRC = main.o fun.o
#SRC = $(wildcard main.c fun.c ../Makefile4/include/fun.h)
#SRC = $(wildcard *.c ./include/*.h)
SRC = $(wildcard *.c)
#OBJ = $(patsubst %.c, %.o, main.c fun.c)
OBJ = $(patsubst %.c, %.o, $(SRC))

CFLAGS = -c -Wall -I /data/share/git_test/code_20260622/Makefile5/include
#LDFLAGS = -lm
CC=gcc

define MYFUN
	echo "*******"
	echo $(0)
	echo $(1)
	echo $(2)
	echo $(3)
endef

all:test
	echo $(SRC)
	echo $(OBJ)
	$(call MYFUN, 1, 2, 3)

test:$(OBJ)
	$(CC) $(LDFLAGS) $^ -o $@
%.o:%.c
	$(CC) $(CFLAGS) $< -o $@

.PHONY:clean
	
clean:
	$(RM) *.o test
