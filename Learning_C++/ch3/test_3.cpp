/*************************************************************************
	> File Name: test_3.cpp
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 四  9/26 15:42:13 2019
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	int a = 1, *p = &a;
	char *str;
	char *address = str;
	cout << "a= " << a << endl;
	cout << "&a= " << &a << endl;
	cout << "p= " << p << endl;
	cout << "*p= " << *p << endl;
	cout << "&p= " << &p << endl;
	cout << "address= " << address << endl;
}
