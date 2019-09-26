/*************************************************************************
	> File Name: test_1.cpp
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 一  9/23 22:08:59 2019
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	int a[3][3], *p, i;
	p = &a[1][1];
	for (i = 0; i < 4; i++){
		p[i] = i + 1;
		printf("%d, %d\n", a[1][i], p[i]);
	}
	return 0;
}
