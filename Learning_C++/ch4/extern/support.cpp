/*************************************************************************
	> File Name: support.cpp
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 一  9/30 10:44:46 2019
 ************************************************************************/

#include<iostream>

extern int count;

void write_extern(void){
	std::cout << "Count is " << count << std::endl;
}
