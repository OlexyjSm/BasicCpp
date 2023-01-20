//---------------------------------------------------------------#
//HM:2                                                           |
//Task 2. The user enters the company's profit for the year (12  |
//months).The user will then enter a project(eg                  |
//3 and 6 — search between the third and sixth).Necessary        |
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
    



    const char Month[][12] = { "Сiчень","Лютий","Березень","Квiтень","Травень","Червень","Липень","Серпень","Вересень","Жовтень","Листопад","Грудень" };

    int profit[12];
    int begin = 0;
    int end = 0;
    int max = begin;
    int min = begin;


    for (int i = 0; i < 12; i++)
    {
        cout << "Прибуток в : " << Month[i] << "\t";
        cin >> profit[i];
    }

    cout << "\n";
    cout << "Введiть початковий дiапазон мiсяцiв вiд 1 до 12  : ";
    cin >> begin;
    cout << "Введiть кiнцевий дiапазон мiсяцiв вiд 1 до 12  : ";
    cin >> end;



    for (int i = begin; i <= end; i++)
    {
        cout << " " << profit[i];  //вивожу  прибуток по мiсяцях в заданому дiапазонi

        if (profit[max] <= profit[i])
            max = i;

        if (profit[min] >= profit[i])
            min = i;
    }

    cout << "\nМаксимальний прибуток в вибраному дiапазонi буде в  " << Month[max] << "\t" << profit[max] << "\n\n";
    cout << "\nМинимальний прибуток в вибраному дiапазонi буде в  " << Month[min] << "\t" << profit[min] << "\n\n";


    return 0;

}

		

