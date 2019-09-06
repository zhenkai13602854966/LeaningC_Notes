/*************************************************************************
	> File Name: main.c
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 五  9/ 6 15:51:06 2019
 ************************************************************************/

#include<stdio.h>

int main()
{
    int i,j;
    for(i=0;i<8;i++)
    {
		for(j=0;j<8;j++)
			if((i+j)%2==0)
				printf("%c%c",219,219);
			else printf("  ");
		printf("\n");
    }
    return 0;
}
