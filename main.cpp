#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;
int RandInt(int min, int max)
{
    if (max < min)
        swap(max, min);
    return min + rand() % (max - min + 1);
}
void SetRndArray1D(int arr[], int n, int min, int max)
{
    for (size_t i = 0; i < n; i++)
        arr[i] = RandInt(min, max);
}
void ShowArray1D(int arr[], int n)
{
    for (size_t i = 0; i < n; i++)
        cout << arr[i] << '\t';
    cout << '\n';
}
int PositiveArrayElement(int arr[], int n)
{
    int PosEl = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            PosEl++;
    }
    return PosEl;
}
int NegativeArrayElement(int arr[], int n)
{
    int NegEl = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            NegEl++;
    }
    return NegEl;
}
int ZeroArrayElement(int arr[], int n)
{
    int ZerEl = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            ZerEl++;
    }
    return ZerEl;
}
int main()
{
    SetConsoleOutputCP(1251);
    int const size = 100;
    srand(time(0));
    int arr[size]{ 0 };
    int min = -10, max = 10;
    cout << "Введите размер массива: ";
    int n;
    cin >> n;
    SetRndArray1D(arr, n, min, max);
    RandInt(min, max);
    cout << "Массив: " << endl;
    ShowArray1D(arr, n);
    cout << "В передаваемом функции массиве элементов:\n\n- положительных: " << PositiveArrayElement(arr, n) << endl;
    cout << "- отрицательых: " << NegativeArrayElement(arr, n) << endl;
    cout << "- нулевых: " << ZeroArrayElement(arr, n) << endl;
}