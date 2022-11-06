#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int t, s, v;
	cout << "Enter the distance to the airport (in km): ";
	cin >> s;
	cout << "Enter the time you need to arrive (in hours): ";
	cin >> t;
	v = s / t;
	cout << "You need to drive at speed: " << v << " km/h" << endl;
	
	system("pause");

	return 0;
}