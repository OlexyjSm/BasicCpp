//---------------------------------------------------------------------------#
//Task 2. Using a pointer to an array of integers,                                   |
//reverse the order of the elements of the array.                            |
//Use the arithmetic of pointers in the program to move through the array,   |
//as well as the dereferencing operator.                                     |
//---------------------------------------------------------------------------#


#include <iostream>
using namespace std;

void main()
{
    const int size = 5;
    int arr[size] = { 5, 7, -8, 3, 9 }, temp;
    int* start = arr, * end = &arr[size - 1];

    while (start != end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
        cout << temp;
    }
}