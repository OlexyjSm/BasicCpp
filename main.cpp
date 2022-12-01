#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	int num;

	cout << "Enter number: ";

	cin >> num;

	if (num > 0 && num <= 10)
	{

		for (int k = 1; k <= 10; k++)

			cout << num << "x" << k << "=" << num * k << endl;

	}
	else

		cout << "Wrong input" << endl;
	
	system("PAUSE");
	
	
	return 0;
}