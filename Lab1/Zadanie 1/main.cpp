#include <iostream>
#include <cmath>

using namespace std;

class Kalkulator{

public:

    double dodawanie(double a, double b)
    {
        a = a+b;
        cout << "wynik: " << a;
        return a;
    }

    double odejmowanie(double a, double b)
    {
        a = a-b;
        cout << "wynik: " << a;
        return a;
    }

    double mnozenie(double a, double b)
    {
        a = a*b;
        cout << "wynik: " << a;
        return a;
    }

    double dzielenie(double a, double b)
    {
        if(b == 0)
        {
            cout << "Nie dziel przez zero!!! Wpisz poprawna wartosc" << endl;
            return a;
        }
        else
        {
            a = a/b;
            cout << "wynik: " << a;
            return a;
        }
    }

    double modulo(double a, double b)
    {
        a = std::fmod(a,b);
        cout << a;
        return a;
    }

    double pierwiastek(double a, double b)
    {
        a = sqrt(a);
        cout << a;
        return a;
    }

};

int main()
{
    char op;
    double a,b,c;
    Kalkulator kal;
    cout << "--------------------------------" << endl;
    cout << "Kalkulator" << endl;
    cout << "--------------------------------" << endl;

    cout << "Aby wyjsc z programu wpisz: [E]" << endl;
    cout << "Aby zresetowac pamiec wpisz: [C]" << endl;

    a = 0;

    cout << "\nPodaj a: " << endl;
    cin >> a;

    while(true)
    {
        cout << "\nPodaj Operator: [+] [-] [*] [/] [%] [s]\n" << endl;
        cin >> op;

        switch(op)
        {
        case 'C':
            a = 0;
            break;
        case 'E':
            cout << "Koniec dzia³ania";
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
// Mateusz Gajda
