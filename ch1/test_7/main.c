/*************************************************************************
	> File Name: main.c
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 五  9/ 6 15:31:41 2019
 ************************************************************************/

/*题目：输出特殊图案，请在c环境中运行，看一看，Very Beautiful!

程序分析：字符共有256个。不同字符，图形不一样。*/

#include<stdio.h>

int main()
{
	char a=176,b=219;
    printf("%c%c%c%c%c\n",b,a,a,a,b);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%c\n",a,a,b,a,a);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%c\n",b,a,a,a,b);
    return 0;
}

