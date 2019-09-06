/*************************************************************************
	> File Name: main.c
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 五  9/ 6 14:46:22 2019
 ************************************************************************/


/*题目：输入某年某月某日，判断这一天是这一年的第几天？

程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊情况，闰年且输入月份大于3时需考虑多加一天。
*/

#include<stdio.h>

int leap(int year){
	if ((year % 4 == 0 && year % 10 != 0) || year % 400 == 0){
		return 1;
	} else 
		return 0;
}

int main()
{
	int day, month, year, sum;
	printf("请输入年月日，格式为：年，月，日(如2019 09 06):");
	scanf("%d %d %d", &year, &month, &day);
	switch(month){
		case 1:
			sum = 0; break;
		case 2:
			sum = 31; break;
		case 3:
			sum=59; break;
		case 4:
			sum=90; break;
		case 5:
			sum=120; break;
		case 6:
			sum=151; break;
		case 7:
			sum=181; break;
		case 8:
			sum=212; break;
		case 9:
			sum=243; break;
		case 10:
			sum=273; break;
		case 11:
			sum=304; break;
		case 12:
			sum=334; break;
		default:
			printf("data error"); break;
	}
	if (leap(year) == 1 && month > 2){
		sum++;
	}

	printf("这是一年中的第%d天。\n", sum);
	return 0;
}
