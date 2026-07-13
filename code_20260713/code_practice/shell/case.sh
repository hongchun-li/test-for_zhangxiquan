#!/bin/bash 

file="8"

case $file in
	*.jpg|*.png)
		echo "图像文件"
		;;
	*.txt|*.md)
		echo "文本文件"
		;;
	[A-Za-z]_[0-9])
		echo "字母+下划线+数字格式"
		;;
	y|Y)
		echo "yes"
		;;
	8)
		echo "数字"
		;;
	*)
		echo "未知类型"
		;;
esac
