/*************************************************************************
	> File Name: test_7.cpp
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 一  9/23 21:56:39 2019
 ************************************************************************/

#include<iostream>
using namespace std;

void print_time(int &a, int &b)
{
	cout << "Time: " << a << ":" << b << endl;
}

int main()
{
	int hours, minutes;
	cout << "Please enter the number of hours: ";
	cin >> hours;
	cout << "Please enter the number of minutes: ";
	cin >> minutes;
	print_time(hours, minutes);
	return 0;

}
