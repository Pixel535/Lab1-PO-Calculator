// Zad1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.

using namespace std;
#include <iostream>
#include "C.h"

int main()
{
    char op;
    double a, b, c;
    C kal;
    cout << "--------------------------------" << endl;
    cout << "Kalkulator" << endl;
    cout << "--------------------------------" << endl;

    cout << "Aby wyjsc z programu wpisz: [E]" << endl;
    cout << "Aby zresetowac pamiec wpisz: [C]" << endl;

    a = 0;

    cout << "\nPodaj a: " << endl;
    cin >> a;

    while (true)
    {
        cout << "\nPodaj Operator: [+] [-] [*] [/] [%] [s]\n" << endl;
        cin >> op;

        switch (op)
        {
        case 'C':
            a = 0;
            break;
        case 'E':
            cout << "Koniec dzialania";
            return 0;
            break;
        case '+':
            cout << "\nPodaj b: " << endl;
            cin >> b;
            a = kal.dodawanie(a, b);
            break;
        case '-':
            cout << "\nPodaj b: " << endl;
            cin >> b;
            a = kal.odejmowanie(a, b);
            break;
        case '*':
            cout << "\nPodaj b: " << endl;
            cin >> b;
            a = kal.mnozenie(a, b);
            break;
        case '/':
            cout << "\nPodaj b: " << endl;
            cin >> b;
            a = kal.dzielenie(a, b);
            break;
        case '%':
            cout << "\nPodaj b: " << endl;
            cin >> b;
            a = kal.modulo(a, b);
        case 's':
            a = kal.pierwiastek(a, b);
        }
    }

}

