/*************************************************************************
	> File Name: test_9.cpp
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 五  9/27 17:27:49 2019
 ************************************************************************/

#include<iostream>
#include<time.h>

using namespace std;

int *getRandom()
{
	static int r[10];
	int i;

	srand((unsigned) time (NULL));
	for (i = 0; i < 10; i++){
		r[i] = rand();
		cout << r[i] << endl;
	}
	return r;
}

int main()
{
	int *p;
	int i;
	p = getRandom();
	for (int i = 0; i < 10; i++)
	{
		printf("*(p+[%d]):%d\n", i, *(p+i));
	}
	return 0;
}

