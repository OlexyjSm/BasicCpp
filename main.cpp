#include <iostream>
#include<Windows.h>

using namespace std;

int main()
{

    int r1, r2, imax, imin;
    const int n = 12;
    double a[n];

    cout << "Profit:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "month " << i + 1 << ": ";
        cin >> a[i];
    }

    cout << "Enter month_start, month_end:\n";
    cin >> r1 >> r2;

    imax = imin = r1 - 1;
    for (int i = r1; i < r2; i++)
    {
        if (a[i] > a[imax]) imax = i;
        if (a[i] < a[imin]) imin = i;
    }

    cout << "Max profit: month " << imax + 1 << "\n";
    cout << "Min profit: month " << imin + 1 << "\n";

    system("pause");

	return 0;
}