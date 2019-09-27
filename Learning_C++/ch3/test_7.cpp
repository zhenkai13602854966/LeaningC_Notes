/*************************************************************************
	> File Name: test_7.cpp
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 五  9/27 14:51:31 2019
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	int var = 20;
	int *p;
	p = &var;

	cout << "&var=" << &var << endl;
	cout << "p=" << p << endl;
	cout << "*p=" << *p << endl;
	cout << "&p=" << &p << endl;
	cout << "*&p=" << *&p << endl;
	cout << "&*p=" << &*p << endl;
}
