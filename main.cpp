//-----------------------------------------------#
//Task 6. Count the number of integers in a range|
//from 100 to 999 that have two identical digits.|
//-----------------------------------------------#

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc)
{
	int k = 0;
	int i;
	int i1, i2, i3;

	for (int i = 100; i <= 999; i++)
	{

		i1 = i / 100;
		i2 = i % 10;
		i3 = (i % 100) / 10;

		if (i1 == i2 || i2 == i3 || i3 == i1) k++;

	}
	cout << "Result: " << k << "\n";
	
	system("PAUSE");

	return 0;
}