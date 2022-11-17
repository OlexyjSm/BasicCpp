#include <iostream>
#include <locale.h>
#include <windows.h>
#include <cmath>
using namespace std;

int main()
{
    int s;

        cout << "Enter seconds:";
        cin >> s;
  
        cout << "Until the end of the working day: " << 8 - (s / 60 / 60) << " hours " << endl;



        return 0;
 }