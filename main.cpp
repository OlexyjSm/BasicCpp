#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;

    float sr = 0;
    
    cout << "a = ";  cin >> a;
    
    cout << "b = ";  cin >> b;
    
    for (int i = a; i <= b; i++) sr += i;
    
    sr = sr / (1000 - 1);
    
    cout << sr << endl;
    
    system("pause");
    
    return 0;
}
