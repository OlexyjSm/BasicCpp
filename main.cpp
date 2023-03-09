//--------------------------------------------------------------------------------------#
//Task 2. Two arrays are given: A[M] and B[N] (M and N are entered from the keyboard).  |
//A third array must be created minimum possible size in which to collect               |
//elements of the arrays Aand B, which are not common to them, without repetitions      |
//--------------------------------------------------------------------------------------#


#include <iostream>
#include <cstdlib>  // для rand(), для srand().
#include <ctime> // для time().

//#include <Windows.h>
//#include <conio.h>
using namespace std;

#define WINDOWS ""


void set_header();
void Init_Array(int* array, int size_array);
void Show_Array(int* array, int size_array);
void func(int* Arr_1, int Size_Arr_1, int* Arr_2, int Size_Arr_2, int* Arr_3, int Size_Arr_3);

int main()
{
    setlocale(LC_ALL, WINDOWS);
    cout << endl;
    set_header();
    cout << endl;

    int SizeArrA, SizeArrB;
    cout << "Введите размер первого массива: ";
    cin >> SizeArrA;
    cout << "Введите размер второго массива: ";
    cin >> SizeArrB;
    cout << endl;


    int SizeArrC = 0;
    int* Arr_1 = new int[SizeArrA];
    int* Arr_2 = new int[SizeArrB];
    int* Arr_3 = new int[SizeArrC];

    Init_Array(Arr_1, SizeArrA);
    Init_Array(Arr_2, SizeArrB);
    Show_Array(Arr_1, SizeArrA);
    Show_Array(Arr_2, SizeArrB);
    func(Arr_1, SizeArrA, Arr_2, SizeArrB, Arr_3, SizeArrC);
    Show_Array(Arr_3, SizeArrC);

    //system("pause>>null");

    cout << endl;
    system("pause");
    system("cls");
    return(0);
}

void set_header()
{
    cout << endl;
    cout << "\n\t\t\tОсновы программирования на языке С++. \n";
    cout << "\t\t\tТема: Indicators. \n\n";
    cout << endl;
}

void Init_Array(int* array, int size_array) {
    for (int i = 0; i < size_array; i++)
        *(array + i) = rand() % 100;
}

void Show_Array(int* array, int size_array) {
    for (int i = 0; i < size_array; i++)
        cout << "\t" << *(array + i);
    cout << endl << endl;
}

void func(int* Arr_1, int Size_Arr_1, int* Arr_2, int Size_Arr_2, int* Arr_3, int Size_Arr_3)
{
    int temp;
    for (int i = 0; i < Size_Arr_1; i++)
    {
        temp = 0;
        for (int j = 0; j < Size_Arr_2; j++)
        {
            if (Arr_1[i] != Arr_2[j])
            {
                temp++;
            }
            cout << "temp = " << temp << endl;
            if (temp == Size_Arr_2) { Arr_3[Size_Arr_3] = Arr_1[i]; Size_Arr_3++; }
        }
        cout << endl;
    }
}