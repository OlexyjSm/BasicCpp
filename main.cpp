#include <iostream>
using namespace std;

int main() 

{
    int n, d, sum1 = 0, sum2 = 0, i = 1;
    while (true) 
    {
        cin >> n;
        if (n < 0)
            break;
        while (n > 0) 
        {
            d = n % 10;
            if (i % 2 == 0)
                sum2 += d;
            else
                sum1 += d;
            n = n / 10;
            i++;
        }
        if (sum1 == sum2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
	
	
