/*************************************************************************
	> File Name: test_14.cpp
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 日  9/29 20:35:51 2019
 ************************************************************************/

#include<iostream>
using namespace std;

char * foo(){
	char str[9] = {1};
	char *p;
	p = str;
	return p;
}

int main()
{
	char *p = foo();
	cout << "p=" << p << endl;
	
}
