#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()

{
	int h1, m1, s1;
	int h2, m2, s2;
	cout << "Enter the start time of using the scooter (hours): ";
	cin >> h1;
	cout << "Enter the start time of using the scooter (min): ";
	cin >> m1;
	cout << "Enter time to start using the scooter (seconds): ";
	cin >> s1;
	cout << "Enter the end time of using the scooter (hours): ";
	cin >> h2;
	cout << "Enter the end time of using the scooter (min): ";
	cin >> m2;
	cout << "Enter the scooter's expiration time (seconds): ";
	cin >> s2;

	int duration = (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1);

	int cost = 2;
	
	for (duration > 0; duration -= 60; cost += 2);

		cout << "Your trip will cost: " << cost << endl;
	
	system("pause");
	
	return 0;
}