#!/bin/bash 

num=$((RANDOM%100+1))
echo $num

read -p "计算机生成一个1-100的随机数,你猜是多少?" number
echo $number

if [ $number -eq $num ]
then
	echo "恭喜你猜对了!"
elif [ $number -gt $num ]
then
	echo "猜大了!"
else
	echo "猜小了!"
fi

