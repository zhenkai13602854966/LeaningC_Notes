/*************************************************************************
	> File Name: test_2.cpp
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 一  9/23 22:22:45 2019
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	int a[3][3] = {{1, 2}, {3, 4}, {5, 6}}, s=0 ;
	for (int i = 1; i < 3; i++){
		for (int j = 0; j < 3; j++){
			s += a[i][j];
			printf("[%d][%d]=%d\n", i, j, a[i][j]);
		}
	}
	printf("%d\n", s);
	return 0;
}
