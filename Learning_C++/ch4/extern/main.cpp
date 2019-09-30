/*************************************************************************
	> File Name: main.cpp
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 一  9/30 10:46:21 2019
 ************************************************************************/

#include<iostream>

int count;

extern void write_extern();

int main(){
	count = 5;
	write_extern();
}
