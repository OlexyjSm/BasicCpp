//-----------------------------------------------------------------------------------------------------------#
//Task 2. Develop the structure "Living entity" (speed of movement, type(bird, livestock, human), color,     |
//characteristic(for a bird — flight speed, valid                                                            |
//number, for livestock — even - numbered, logical variable, for person — IQ level, integer variable).       |
//Recommendations: implement the characteristic as a union, implement the type as an enumerable data type.   |
//Create an instance of the "Living entity" structure and implement the following functions for it :         |
//■ Entering information;                                                                                    |
//■ Print information.                                                                                       |
//Create an array of 10 instances of the "Live                                                               |
//entity" and implement the following functions for it:                                                      |
//■ Edit data;                                                                                               |
//■ Print the entire list;                                                                                   |
//■ Search by characteristic.                                                                                |
//-----------------------------------------------------------------------------------------------------------#

#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;

enum type { bird, cattle, human };

struct charact
{
    bool c;
    int iq;
    double speed;
};

struct entity
{
private:
    type t;
    charact ch;
    string color;
    double speed;
public:
    void st()
    {
        int choise;
        cout << "Enter type(0 - bird, 1 - cattle, 2 - human):";
        cin >> choise;
        if (choise >= 0 && choise <= 2)
            t = static_cast<type>(choise);
        else exit(1);
        switch (t)
        {
        case 0:
            cout << "Bird" << endl
                << "speed? "; cin >> ch.speed;
            speed = ch.speed;
            cout << "color? "; cin >> color;
            break;
        case 1:
            cout << "Cattle" << endl
                << "speed? "; cin >> speed;
            cout << "color? "; cin >> color;
            break;
        case 2:
            cout << "Human" << endl
                << "IQ? "; cin >> ch.iq;
            cout << "speed? "; cin >> ch.speed;
            cout << "color? "; cin >> color;
            break;
        }
    }
    void print() const
    {
        switch (t)
        {
        case 0:
            cout << "Bird" << endl
                << "speed " << ch.speed << endl
                << "color " << color << endl;
            break;
        case 1:
            cout << "Cattle" << endl
                << "speed " << speed << endl
                << "color " << color << endl;
            break;
        case 2:
            cout << "Human" << endl
                << "IQ " << ch.iq << endl
                << "speed " << ch.speed << endl
                << "color " << color << endl;
            break;
        }
    }
};


int main(int argc, char* argv[])
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    entity e[10];
    for (int i = 0; i < 10; i++)
        e[i].st();
    for (int i = 0; i < 10; i++)
        e[i].print();
    return 0;
}