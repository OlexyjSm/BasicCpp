#include <iostream>

#include <cstdlib>

#include <time.h>

using namespace std;

void randarr(float* arr, int n) {

    for (int i = 0; i < n; i++) {

        arr[i] = rand() % 10 - 5;

    }

}

void printarr(float* arr, int n) {

    for (int i = 0; i < n; i++) {

        cout << arr[i] << " ";

    }

}

void sumnegative(float* arr, int n) {

    float sumneg = 0;

    for (int i = 0; i < n; i++) {

        if (arr[i] < 0)

            sumneg += arr[i];

    }

    cout << "—ума вiд'Їмних елементiв = " << sumneg << endl;

}



void summintomax(float* arr, int n) {

    int max = 0, min = 0, p = 1;

    for (int i = 1; i < n; i++) {

        if (arr[i] < arr[min])

            min = i;

        if (arr[i] > arr[max])

            max = i;

    }

    for (int i = max + 1; i < min; i++)

        p *= arr[i];

    cout << "—ума елементiв мiж min та max = " << p << endl;

}

void sumpair(float* arr, int n) {

    int sumpairelements = arr[1];

    for (int i = 1; i < n; i++) {

        if (i % 2 != 0) {

            sumpairelements *= arr[i];

        }

    }

    cout << "—ума елементiв на парних мiсц€х = " << sumpairelements << endl;

}

void sumnegtoneg(float* arr, int n) {

    int sum = 0, acc = 0;

    bool started = false;

    for (int i = 0; i < n; i++) {

        if (arr[i] < 0) {

            if (!started) {

                acc = 0;

                started = true;

            }

            else {

                sum += acc;

                acc = arr[i];

            }

        }

        else

            acc += arr[i];

    }

    cout << sum << endl;

}

int main() {

    srand(time(NULL));

    setlocale(LC_ALL, "Ukrainian");

    int n;

    cout << "¬ведiть кiлькiсть елементiв масиву: ";

    cin >> n;

    float* arr = new float[n];

    randarr(arr, n);

    cout << "ћасив :" << endl;

    printarr(arr, n);

    cout << "\n«находимо суму вiд'Їмних елементiв..." << endl;

    sumnegative(arr, n);

    cout << "\n«находимо добуток елементiв мiж min i max..." << endl;

    summintomax(arr, n);

    cout << "\n«находимо добуток елементiв з парними номерами..." << endl;

    sumpair(arr, n);

    cout << "\n«находимо добуток елементiв мiж першим i останнiм вiд'Їмним елементом..." << endl;

    sumnegtoneg(arr, n);

    delete[] arr;	
    
    return 0;
}