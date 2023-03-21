//-------------------------------------------------------------------------------#
//Task 1. Using two pointers to an array of integers, copy one array to another. |
//Use in the program pointer arithmetic to move through the array,               |
//as well as the dereference operator                                            |
//-------------------------------------------------------------------------------#




#include <iostream>
using namespace std;

void show_array(int arr[], const size_t& arr_size)
{
    int* arr_end = arr + arr_size;
    cout << "{ ";
    while (arr != arr_end)
        cout << *arr++ << " ";
    cout << "}\n";
}

int main()
{
    const int size = 10;
    int arr1[size] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
    int arr2[size] = { 0, 0, 0, 0, 0,  0,  0,  0,  0,  0 };

    show_array(arr1, size);
    show_array(arr2, size);

    int* ptr_arr1 = arr1;
    int* ptr_arr2 = arr2;
    int* arr_end = ptr_arr1 + size;
    for (; ptr_arr1 != arr_end; ++ptr_arr1, ++ptr_arr2)
        *ptr_arr2 = *ptr_arr1;

    show_array(arr1, size);
    show_array(arr2, size);

    system("PAUSE");
    return 0;
}