/*************************************************************************
	> File Name: test_4.cpp
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 三  9/25 21:57:31 2019
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	char str[10]="China";
	int yams[3] = {7, 8, 9};
	printf("%s", str);
	cout << sizeof str << endl;
	cout << yams[0] << yams[1] << yams[2] << sizeof(yams) << endl;
}
