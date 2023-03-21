//--------------------------------------------------------------------------------------------------#
//Task 1. Implement the "Car" structure (color, model, number).                                     |
//The number of the car can represent itself                                                        |
//or a five - digit number or a word of up to 8 characters.                                         |
//Recommendations: implement the number as a union.                                                 |
//Create an instance of the "Machine" structure and implement the following functions for it :      |
//■ Filling the machine;                                                                            |
//■ Machine printing.                                                                               |
//Create an array of 10 instances of the "Car" structure                                            |
//and implement the following functions for it:                                                     |
//■ Edit the machine;                                                                               |
//■ Printing of all machines;                                                                       |
//■ Car search by number.                                                                           |
//--------------------------------------------------------------------------------------------------#

#include <iostream>
using namespace std;

struct Car {
    char* color;
    char* model;
    char* number;
};
Car car;

enum UserChoice {
    Exit = 0,
    Edit = 1,
    Print = 2,
    Search = 3
};

void fillCar(struct Car*);
int editCar(struct Car*&, int); // редактировать машишу
void printCars(struct Car*&, int); // печать всех машин
int searchByNumber(struct Car*&, int); // поиск авто по номеру
void deleteArrays(struct Car*&, int, char*&, char*&);

int main(int argc, const char* argv[]) {
    setlocale(0, "");

    int intUserChoice;
    enum UserChoice userChoice;
    char* min = new char;
    char* buffer = new char;
    int carCount = 10;
    struct Car* car = new Car[carCount];
    for (int i = 0; i < carCount; i++) {
        car[i].color = new char;
        car[i].model = new char;
        car[i].number = new char;
    }
    fillCar(car);

    do
    {
        cout << endl << endl << "STRUCTURE MACHINE" << endl << "==========" <<
            endl << endl <<
            "Go out - 0" << endl << "Edit car - 1" << endl <<
            "Car output - 2" << endl << "Search by number - 3" << endl;
        cin >> intUserChoice;
        userChoice = (enum UserChoice)intUserChoice;

        switch (userChoice) {
        case Exit:
            cout << "Go out" << endl;
            break;
        case Edit:
            editCar(car, carCount);
        case Print:
            printCars(car, carCount);
        case Search:
            searchByNumber(car, carCount);
            break;
        default:
            cout << "value is not correct!";
            break;
        }
    } while (userChoice != Exit);
    deleteArrays(car, carCount, min, buffer);
}

void fillCar(struct Car* car)
{
    // car 1
    car[1].color - "Silver";
    car[1].model - "Ford";
    car[1].number - "АA1234BC";
    // car 2
    car[2].color - "Red";
    car[2].model - "Tesla";
    car[2].number - "Bc3234AA";
    // car 3
    car[3].color - "Silver";
    car[3].model - "Skoda";
    car[3].number - "BX4515CO";
    // car 4
    car[4].color - "Blue";
    car[4].model - "Mazda";
    car[4].number - "ВC7298AМ";
    // car 5
    car[5].color - "Yellow";
    car[5].model - "Mercedes-Benz";
    car[5].number - "AM5847CO";
    // car 6
    car[6].color - "White";
    car[6].model - "Chevrolet";
    car[6].number - "AI1453AA";
    // car 7
    car[7].color - "Black";
    car[7].model - "Lamborghini";
    car[7].number - "AI4456АА";
    // car 8
    car[8].color - "Red";
    car[8].model - "Ferrari";
    car[8].number - "AM5678AA";
    // car 9
    car[9].color - "Purple";
    car[9].model - "BMW";
    car[9].number - "AA7777AI";
    // car 10
    car[10].color - "Pink";
    car[10].model - "Range Rover";
    car[10].number - "BX1111CO";
}

int editCar(struct Car*& car, int carCount)
{
    int userCarChoice;
    int userEditChoice;
    char* newData = new char;
    cout << "EDIT CAR" << endl << "==========" << endl;

    for (int i = 0; i < carCount; i++) {
        cout << i + 1 << ": " << car[i].color << " (" << car[i].model << ")" << "[" << car[i].number << " / " << endl;
    }
    cout << endl << "enter the car (number): ";
    cin >> userCarChoice;
    if (userCarChoice > 10 || userCarChoice < 1) {
        cout << "incorrect value!" << endl;
        return 1;
    }
    userCarChoice--;
    cout << "enter edit type: " << endl << "1 - color" << endl << "2 - model" << endl << "3 - number" << endl;
    cin >> userEditChoice;

    switch (userEditChoice) {
    case 1:
        cout << "enter a new car color ";
        cout << newData;
        car[userCarChoice].color = newData;
        break;
    case 2:
        cout << "enter new car model ";
        cout << newData;
        car[userCarChoice].model = newData;
    case 3:
        cout << "enter a new car number ";
        cin >> newData;
        car[userCarChoice].number = newData;
        break;
    default:
        cout << "incorrect value" << endl;
        break;
    }
    cout << "new data: " << endl << car[userCarChoice].color << " (" << car[userCarChoice].model << ")" << "[" <<
        car[userCarChoice].number << " / " << endl;
    //delete [] newData;
    return 0;
}

void printCars(struct Car*& car, int carCount)
{
    for (int i = 0; i < carCount; i++) {
        for (int i = 0; i < carCount; i++) {
            cout << i + 1 << ": " << car[i].color << " (" << car[i].model << ")" << "[" << car[i].number << " / " << endl;
        }
    }
}

int searchByNumber(struct Car*& car, int carCount)
{
    char* searchByNumber = new char;
    cout << "enter car number ";
    cin >> searchByNumber;
    int size = strlen(searchByNumber);
    int count = 0;
    bool number = false;

    for (int i = 0; i < size; i++) {
        if ((searchByNumber[i] > 64 && searchByNumber[i] < 91) || (searchByNumber[i] > 96 && searchByNumber[i] < 123))
        {
        }
        else
        {
            cout << "incorrect value!";
            return 1;
        }
    }
    for (int i = 0; i < carCount; i++) {
        for (int j = 0; j < size; j++) {
            if ((searchByNumber[j] == car[i].number[j]) || ((int)searchByNumber[j]) - 32 == car[i].number[j] || ((int)searchByNumber[j] + 32 == (int)car[i].number[j])) {
                count++;
            }
            if (count == size) {
                cout << car[i].color << " (" << car[i].model << ")" << "[" << car[i].number << " / " << endl;
                int writer = true;
            }
        }
        count = 0;
    }

}

void deleteArrays(struct Car*& car, int carCount, char*& min, char*& buffer)
{
    delete[] min;
    delete[] buffer;
}