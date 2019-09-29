/*************************************************************************
	> File Name: test_10.cpp
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 五  9/27 17:41:33 2019
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	double banlance[5] = {1000.0, 3.2, 70.8, 4.6, 36.0};
	double *p;
	int i;

	p = banlance;

	for (i = 0; i < 5; i++)
	{
		cout << i << *(p + i) << endl;
		cout << i << *(banlance + i) << endl;
	}
}
