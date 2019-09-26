/*************************************************************************
	> File Name: test_3.cpp
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 一  9/23 22:35:29 2019
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	int a[3][3] = {{1, 2}, {3, 4}, {5, 6}};
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << a[i][j];
		}
	}
}
