/*************************************************************************
	> File Name: test_4.cpp
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 四  9/26 16:33:22 2019
 ************************************************************************/

#include<iostream>
using namespace std;

void GetMemory(char **p)
{
	*p = (char *) malloc(100);
}

void GetMemory1(char *&p)
{
	p = (char *) malloc(100);
}

void Test(void)
{
	char *str = NULL;
	char *str1 = NULL;

	GetMemory(&str);
	GetMemory1(str1);

	strcpy(str, "Hello world!");
	strcpy(str1, "Hello world!");
	cout << str << endl;
	cout << str1 << endl;

	free(str);
	free(str1);
}

int main()
{
	Test();
}
