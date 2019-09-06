/*************************************************************************
	> File Name: main.c
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 五  9/ 6 15:53:05 2019
 ************************************************************************/

#include<stdio.h>

int main()
{
    int i,j;
    printf("\1\1\n"); /*输出两个笑脸*/
    for(i=1;i<11;i++)
    {
		for(j=1;j<=i;j++)
			printf("%c%c",219,219);
		printf("\n");
    }
    return 0;
}
