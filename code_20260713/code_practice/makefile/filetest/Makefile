# 自定义变量
# X = a
# '=' 取最后一次X的值赋值给 Y
# Y = $(X)
# := 覆盖式赋值
# Y := $(X)
# += 追加式赋值
# Y += c
# ?= 先判断之前是否定义赋值过
# Y ?= d
# X = b

# SRC = main.o fun.o
SRC = main.o
SRC += fun.o
#all 伪目标,一般用来指定生成的文件,尤其是多个目标是
all:test

test:$(SRC)
	gcc $(SRC) -o test
	# @ 隐藏命令的打印,直接输出结果
	# @echo $(X)
	# @echo ${X}
fun.o:fun.c
	gcc -c fun.c -o fun.o

main.o:main.c
	gcc -c main.c -o main.o

.PHONY:clean

clean:
	rm *.o test
