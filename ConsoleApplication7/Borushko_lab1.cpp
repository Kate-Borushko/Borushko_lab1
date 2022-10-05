// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
    void PrintMenu();
    {
        cout << "____MENU____" << endl
            << "1. Add Pipe" << endl
            << "2. Add Compressor Station" << endl
            << "3. View all objects" << endl
            << "4. Edit Pipe" << endl
            << "5. Edit Station" << endl
            << "6. Save" << endl
            << "7. Load" << endl
            << "0. Exit" << endl;
    }
    int Number, Length = 0, Diametr = 0, Condition = 0, Number_1 = 0, Number_2 = 0, Work = 0, Eff = 0, z = -1000000;
    string Name;
    do {
        cout  << "Enter the number to select an action: ";
        cin >> Number;
        cout << endl;
        if (Number > 7) {

            cout << "There is no option with this number\nEnter again: ";
            cin >> Number;
        }

        if (Number == 1) {

            cout << "To create a new pipe fill in the gaps \nLength (100-999): ";
            cin >> Length;
            if (Length > 999 or Length < 100) {

                cout << "You can't enter this number, please try again: ";
                cin >> Length;
            }

            cout << "Diametr (10-99): ";
            cin >> Diametr;
            if (Diametr > 99 or Diametr < 10) {

                cout << "You can't enter this number, please try again: ";
                cin >> Diametr;
            }

            cout << "Condition (0 - Under repair, 1 - OK): ";
            cin >> Condition;
            if (Condition > 1 or Condition < 0) {

                cout << "You can't enter this number, please try again: ";
                cin >> Condition;
            }

            cout << endl;
            cout << "______PIPE______";
            cout << endl;
            cout << "| Length: "<<Length<<"  |";
            cout << endl;
            cout << "| Diametr: "<<Diametr<<"  |";
            cout << endl;
            cout << "| Condition: "<<Condition<<" |";
            cout << endl;
            
        }

        if (Number == 2) {
            cout << "To create new compressor station fill in the gaps \nName: ";
            cin >> Name;

            cout << "Number of workshops (1-20): ";
            cin >> Number_1;
            if (Number_1 > 20 or Number_1 < 1) {

                cout << "You can't enter this number, please try again: ";
                cin >> Number_1;
            }

            cout << "Number of workshops in work (1-20): ";
            cin >> Number_2;
            if (Number_2 > 20 or Number_2 < 1) {

                cout << "You can't enter this number, please try again: ";
                cin >> Number_2;
            }

            cout << "Efficiency (10-99): ";
            cin >> Eff;
            if (Eff > 99 or Eff < 10) {

                cout << "You can't enter this number, please try again: ";
                cin >> Eff;
            }

            cout << endl;
            cout << "________COMPRESSOR STATION_________";
            cout << endl;
            cout << "| Name: " << Name<<"                    |";
            cout << endl;
            cout << "| Number of workshops: " << Number_1<<"         |";
            cout << endl;
            cout << "| Number of workshops in work: " << Number_2<<" |";
            cout << endl;
            cout << "| Efficiency: " << Eff<<"                  |";
            cout << endl;

        }

        if (Number == 3) {
            cout << "______PIPE______";
            cout << endl;
            cout << "| Length: " << Length<<"  |";
            cout << endl;
            cout << "| Diametr: " << Diametr<<"  |";
            cout << endl;
            cout << "| Condition: " << Condition<<" |"<<"\n";
            cout << endl;
            cout << "________COMPRESSOR STATION_________";
            cout << endl;
            cout << "| Name: " << Name << "                    |";
            cout << endl;
            cout << "| Number of workshops: " << Number_1 << "         |";
            cout << endl;
            cout << "| Number of workshops in work: " << Number_2 << " |";
            cout << endl;
            cout << "| Efficiency: " << Eff << "                  |";
            cout << endl;

        }

        if (Number == 4) {
            cout << "Condition (0 - Under repair, 1 - OK): ";
            cin >> Condition;
            if (Condition > 1 or Condition < 0) {

                cout << "You can't enter this number, please try again: ";
                cin >> Condition;
            }
            if (Condition == 0)
                cout << "Your pipe now is under repair.";
            else
                cout << "Your pipe is OK.";
            cout << endl;
        }

        if (Number == 5) {
            cout << "To start workshop enter 0, to stop workshop enter 1: ";
            cin >> Work;
            cout << Work;
            cout << endl;
        }

        if (Number == 6) {
           // fout.open("data.txt", ios::out);
           // fout << main;
           // fout.close();
        }

        if (Number == 7) {
            cout << "";
        }

        if (Number == 0) {
             exit(0);
        }

    } while (z < 10000000);

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
