/*************************************************************************
	> File Name: test_5.cpp
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 四  9/26 17:02:11 2019
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	char ch = 127;
	int sum = 200;

	ch += 1;
	sum += ch;
	cout << "ch= " << ch << endl;
	cout << "sum= " << sum << endl;
	return 0;
}
