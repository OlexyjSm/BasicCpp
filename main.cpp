#include <time.h>
#include <cstdlib>
#include <iostream>
using namespace std;

	
    void Message(bool Win)
    {
        if (Win)
        {
            cout << "*           *           *   *****  *     *" << endl;
            cout << " *         * *         *      *    **    *" << endl;
            cout << "  *       *   *       *       *    * *   *" << endl;
            cout << "   *     *     *     *        *    *  *  *" << endl;
            cout << "    *   *       *   *         *    *   * *" << endl;
            cout << "     * *         * *          *    *    **" << endl;
            cout << "      *           *         *****  *     *" << endl;

        }
        else
        {
            cout << "*          *******   ******* ******* ****** " << endl;
            cout << "*         *       * *        *       *     *" << endl;
            cout << "*         *       * *        *       *     *" << endl;
            cout << "*         *       *  ******  ******* ****** " << endl;
            cout << "*         *       *        * *       *  *   " << endl;
            cout << "*         *       *        * *       *   *  " << endl;
            cout << "*********  *******   ******  ******* *    * " << endl;
        }
    }

    void VivodKubika(int x)
    {
        switch (x)
        {
        case 1:
            cout << "===========" << endl;
            cout << "|         |" << endl;
            cout << "|         |" << endl;
            cout << "|    *    |" << endl;
            cout << "|         |" << endl;
            cout << "|         |" << endl;
            cout << "===========" << endl;
            break;
        case 2:
            cout << "===========" << endl;
            cout << "|         |" << endl;
            cout << "|    *    |" << endl;
            cout << "|         |" << endl;
            cout << "|    *    |" << endl;
            cout << "|         |" << endl;
            cout << "===========" << endl;
            break;
        case 3:
            cout << "===========" << endl;
            cout << "|         |" << endl;
            cout << "|  *      |" << endl;
            cout << "|    *    |" << endl;
            cout << "|      *  |" << endl;
            cout << "|         |" << endl;
            cout << "===========" << endl;
            break;
        case 4:
            cout << "===========" << endl;
            cout << "|         |" << endl;
            cout << "|  *   *  |" << endl;
            cout << "|         |" << endl;
            cout << "|  *   *  |" << endl;
            cout << "|         |" << endl;
            cout << "===========" << endl;
            break;
        case 5:
            cout << "===========" << endl;
            cout << "|         |" << endl;
            cout << "|  *   *  |" << endl;
            cout << "|    *    |" << endl;
            cout << "|  *   *  |" << endl;
            cout << "|         |" << endl;
            cout << "===========" << endl;
            break;
        case 6:
            cout << "===========" << endl;
            cout << "|         |" << endl;
            cout << "|  *   *  |" << endl;
            cout << "|  *   *  |" << endl;
            cout << "|  *   *  |" << endl;
            cout << "|         |" << endl;
            cout << "===========" << endl;
            break;
        }


    }

    int main()
    {
        int Comp1, Comp2, Player1, Player2;

        srand(time(0));
        Comp1 = rand() % 6 + 1;
        Comp2 = rand() % 6 + 1;

        do {
            cout << "Vvedite chislo 1 kubika:";
            cin >> Player1;
            cout << "\n\n";
        } while ((Player1 < 1) || (Player1 > 6));

        do {
            cout << "Vvedite chislo 2 kubika:";
            cin >> Player2;
            cout << "\n\n";
        } while ((Player2 < 1) || (Player2 > 6));

        cout << "Moi Kubiki:\n";
        VivodKubika(Comp1);
        cout << "\n";
        VivodKubika(Comp2);

        cout << "Tvoi Kubiki:\n";
        VivodKubika(Player1);
        cout << "\n";
        VivodKubika(Player2);

        cout << "\n\n";
        if ((Comp1 + Comp2) > (Player1 + Player2))
            Message(0);
        else
            Message(1);

        system("pause");







        return 0;
    }