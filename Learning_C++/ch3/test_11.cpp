/*************************************************************************
	> File Name: test_11.cpp
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 日  9/29 16:42:56 2019
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char animal[20] = "bear";
	const char *bird = "wern";
	char *ps;

	cout << animal << " and " << bird << endl;

	cout << "Enter a kind of animal: ";
	cin >> animal;
	
	ps = animal;
	cout << ps << "!\n";
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *) ps << endl;

	ps = new char[strlen(animal) + 1];

}
