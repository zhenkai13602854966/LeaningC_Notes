/*************************************************************************
	> File Name: test_2.cpp
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 四  9/26 15:08:09 2019
 ************************************************************************/

#include<iostream>
using namespace std;

void test_2(){
	char string[10], str1[10];
	for (int i; i < 9; i++){
		str1[i] = 'a';
	}
	str1[9] = '\0';
	strcpy(string, str1);
	printf("%s\n", string);
	printf("%s\n", str1);
}
int main()
{
	test_2();
}
