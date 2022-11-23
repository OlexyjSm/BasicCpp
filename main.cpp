//--------------------------------------------------------------------#
//Task 1. Write a program that calculates the sum of integers         |
//numbers from a to 500 (the value of a is entered from the keyboard).|
//--------------------------------------------------------------------#


#include <iostream>
#include <locale.h>
#include <windows.h>
#include <cmath>
using namespace std;

int main()
{

	int a;
	
	cout << "Enter number: ";
	
	cin >> a;
	
	cout << (a + 500) / 2 * (500 - a + 1);
	
	cout << endl;

	system("PAUSE");
	
	
	return 0;


}