/*************************************************************************
	> File Name: test_13.cpp
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 日  9/29 20:29:08 2019
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

char * foo(){
	char *str = "hello";
	return str;
}

int main()
{
	char *p;
	p = foo();
	cout << "p=" << p << endl;
	return 0;
}
