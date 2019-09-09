/*************************************************************************
	> File Name: main.c
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 一  9/ 9 17:16:58 2019
 ************************************************************************/
/*题目：判断1到200之间的素数。

程序分析：判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除， 则表明此数不是素数，反之是素数。*/

#include<stdio.h>

int main()
{
	int i, j, count;
	count = 0;
	for (i = 2; i < 200; i++){
		for (j = 2; j < i; j++){
			if (i % j == 0)
				break;
		} 
		if (j >= i){
			count++;
			printf("%8d", i);
			if (count % 4 == 0)
				printf("\n");
		}
	}
	printf("\n");
	return 0;
}
