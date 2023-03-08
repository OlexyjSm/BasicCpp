//---------------------------------------------------#
//Write a recursive finding function                 |
//the greatest common divisor of two integers.       |
//---------------------------------------------------#

#include <iostream>
using namespace std;
int NOD(int a, int b)
{
    if (b == 0)
        return a;
    if (a > b)
        return NOD(b, a % b);
    else
        return NOD(a, b % a);
}

int main()
{
    setlocale(0, "");
    int a, b;
    cout << "������� 2 �����: " << endl;
    cin >> a >> b;
    cout << "������������ ����� �������� �����: " << NOD(b, a % b) << endl;
    cin.get();
    cin.get();
    return 0;
}