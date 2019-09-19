/*************************************************************************
	> File Name: main.c
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 三  9/18 11:29:44 2019
 ************************************************************************/

/*题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

程序分析：利用while语句,条件为输入的字符不为'\n'。*/

#include<stdio.h>

int main()
{
	char c;
	int letters = 0, space = 0, digits = 0, others = 0;
	printf("Enter some letters:");
	while ((c = getchar()) != '\n'){
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			letters++;
		else if ((c >= '0' && c <= '9'))
			digits++;
		else if (c == ' ')
			space++;
		else 
			others++;
	}
	printf ("%d, %d, %d, %d\n", letters, digits, space, others);
	return 0;
}
