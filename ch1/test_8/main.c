/*************************************************************************
	> File Name: main.c
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 五  9/ 6 15:37:00 2019
 ************************************************************************/

/*题目：输出9*9口诀。

程序分析：分行与列考虑，共 9 行 9 列，i 控制行，j 控制列。*/

#include<stdio.h>

int main()
{
	printf("打印9x9乘法表\n");
	int i, j;
	for (i = 1; i < 10; i++){
		for (j = 1; j <= i; j ++)
			printf("%dx%d=%-3d", i, j, i * j);
		printf("\n");
	}
	return 0;
}
