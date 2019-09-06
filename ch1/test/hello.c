/*************************************************************************
	> File Name: hello.c
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 五  9/ 6 11:00:15 2019
 ************************************************************************/

#include<stdio.h>

void print_hello(){
	printf("Hello World!\n");
}

void print_three(){
	print_hello();
	print_hello();
	print_hello();
}
int main()
{
	printf("输入一次:\n");
	print_hello();
	printf("输入三次:\n");
	print_three();
	return 0;
}
