#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	
	long long p = 1;
	
	int a;
	
	cin >> a;
	
	for (int i = a; i <= 20; i++)
	
		p *= i;
	
	cout << p << endl;
	
	system("pause");
	
	return 0;
}