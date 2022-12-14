//--------------------------------------------------------------------------------#
//Task 1. Write a program that displays on the screen a line with a given symbol, |
// vertical or horizontal, and the line can be drawn quickly,                     |
// normally and slowly.Organize communication with the user through the menu.     |
//--------------------------------------------------------------------------------#

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int action, line, chooseaction;
    char symbol, speed;


    cout << "Enter a character : ";
    cin >> symbol;
    cout << " Enter the length of the line : ";
    cin >> line;
    cout << "\n 1 - Horizontal \n 2 -  Vertical line\n\n Choose an option : ";
    cin >> chooseaction;
    cout << "\n f - Fast \n n - Normal \n s - Slow \n\n Choose an option : ";
    cin >> speed;

    switch (chooseaction)
    {
    case 1:
    {

        for (int i = 0; i < line; i++)
        {
            if (speed == 'f')
            {
                Sleep(20);
                cout << symbol;
            }

            else if (speed == 'n')
            {
                Sleep(400);
                cout << symbol;
            }

            else if (speed == 's')
            {
                Sleep(1000);
                cout << symbol;
            }


        }
    }break;
    case 2:
    {
        for (int j = 0; j < line; j++)
        {
            if (speed == 'f')
            {
                Sleep(20);
                cout << symbol;
            }

            else if (speed == 'n')
            {
                Sleep(400);
                cout << symbol;
            }

            else if (speed == 's')
            {
                Sleep(1000);
                cout << symbol;
            }
        }

    }break;
    }

    cout << endl;



    system("pause");

    return 0;


}
	
	
	

