//---------------------------------------------------------------#
//HM:2                                                           |
//Task 2. The user enters the company's profit for the year (12  |
//months).The user will then enter a project(eg                  |
//3 and 6 � search between the third and sixth).Necessary        |
//changes for the month in which the profit was maximum, and     |
//the month in which the profit was minimal, taking into account |
//of the selected range.                                         |
//---------------------------------------------------------------#

#include <iostream>

#include <stdlib.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Ukr");
    



    const char Month[][12] = { "�i����","�����","��������","��i����","�������","�������","������","�������","��������","�������","��������","�������" };

    int profit[12];
    int begin = 0;
    int end = 0;
    int max = begin;
    int min = begin;


    for (int i = 0; i < 12; i++)
    {
        cout << "�������� � : " << Month[i] << "\t";
        cin >> profit[i];
    }

    cout << "\n";
    cout << "����i�� ���������� �i������ �i���i� �i� 1 �� 12  : ";
    cin >> begin;
    cout << "����i�� �i������ �i������ �i���i� �i� 1 �� 12  : ";
    cin >> end;



    for (int i = begin; i <= end; i++)
    {
        cout << " " << profit[i];  //������  �������� �� �i����� � �������� �i������i

        if (profit[max] <= profit[i])
            max = i;

        if (profit[min] >= profit[i])
            min = i;
    }

    cout << "\n������������ �������� � ��������� �i������i ���� �  " << Month[max] << "\t" << profit[max] << "\n\n";
    cout << "\n����������� �������� � ��������� �i������i ���� �  " << Month[min] << "\t" << profit[min] << "\n\n";


    return 0;

}

		

