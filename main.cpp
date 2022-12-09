//---------------------------------------------------#
//Task 8. The user enters any integer.               |
//It is necessary to remove all digits 3 and 6 from  |
//this integer and output back to the screen.        |
//---------------------------------------------------#

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, res;
    double sum = 0;
    int k = 0;
    cout << "Enter number: ";
    cin >> a;
    while (a != 0) {
        res = a % 10;
        if (res != 3 && res != 6) {
            sum += res*pow(10, k);
            k++;
        }
        a /= 10;
    }
    cout << "The resulting number without 3 and 6: " << sum<<endl;


    system("pause");

	return 0;
}
