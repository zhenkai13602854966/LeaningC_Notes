/*************************************************************************
	> File Name: test_1.cpp
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 四  9/26 14:17:55 2019
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char string[10];
	const char* str1 = "012345678";
	strcpy(string, str1);
	printf("%s\n", string);
	printf("%s\n", str1);
}
