/*************************************************************************
	> File Name: test_12.cpp
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 日  9/29 17:00:50 2019
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	const char *str = "abcd12345678";
	char str1[9] = {1};

	cout << "sizeof str: " << sizeof(str) << endl;;
	cout << "sizeof str1: " << sizeof(str1) << endl;
	cout << "strlen of str: " << strlen(str) << endl;
	cout << "strlen of str1: " << strlen(str1) << endl;


}
