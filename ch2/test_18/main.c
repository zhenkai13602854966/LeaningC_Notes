/*************************************************************************
	> File Name: main.c
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 三  9/18 11:52:00 2019
 ************************************************************************/

/*题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。

程序分析：关键是计算出每一项的值。*/

#include<stdio.h>

int main()
{
	int sum, a, n, t;
	printf("Please enter a and n:");
	scanf("%d %d", &a, &n);
	sum = 0;
	t = a;
	while (n > 0){
		sum += t;
		a = a * 10;
		t += a;
		n--;
	}
	printf("a+aa+aaa...=%d\n", sum);
	return 0;
}

