//------------------------------------------------------------------------------------------------------------------------#
// The user enters the time from the keyboard in seconds that have passed since the beginning of the day.                 |
// Display the current one time in hours, minutesand seconds.Count how much hours, minutesand seconds left until midnight.|
//------------------------------------------------------------------------------------------------------------------------#

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <cmath>
using namespace std;

int main()
{
   
   
    int h = 23, m = 59, s = 60;
          
    cout << "Enter seconds:";
        cin >> s;
        cout << "Result: " << s / 60 / 60 << " hours, " << s / 60 % 60 << " minuts "
            << s % 60 << " seconds" << endl;
         
        cout << "time to midnight: " << 23 - (s / 60 / 60) << " hourse " << 59 - (s / 60 % 60) << " minuts "
            << 60 - (s % 60) << " second " <<endl;
    
       
        
    return 0;
}