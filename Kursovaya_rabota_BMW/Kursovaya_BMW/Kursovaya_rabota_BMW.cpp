// Kursovaya_rabota_BMW.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Functions.h"

int _stateMenu;


int main()
{
    int actions = 0, size = 0;
    BMW* M = new BMW[size];

    cout << "\t\t\t\t\tBMW Group Private Configurator" << endl << endl;
    cout << "If you want to to configurate a car press 1 or if you want to exit press 0" << endl;
    cout << "Your choice : ";
    cin >> _stateMenu;

    while (_stateMenu != 0) {
        switch (_stateMenu) {
        case 1:
            system("cls");

            cout << "Press 1 to configurate BMW with basic configuration" << endl << "Press 2 to configurate BMW with individual configuration" << endl;
            cout << "Press 3 to exit" << endl;
            cout << "Your choice : ";
            cin >> actions;

            system("cls");

            if (actions == 1) {
                cout << "Basic BMW configurated\n\n";
                AddBaseConfig(M, size);
                Print(M, size);
            }
            else if (actions == 2) {
                cout << "Individual BMW configurated\n\n";
                AddIndividualConfig(M, size);
                Print(M, size);
            }
            else if (actions == 3) {
                cout << "All information deleted\n\n";
                delete[] M;
                system("pause");
                system("cls");
                _stateMenu = 0;
                break;

            }
            system("pause");
            system("cls");
            break;
        }
    }
}
