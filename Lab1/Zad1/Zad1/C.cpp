#include "C.h"
#include <cmath>
#include <iostream>

using namespace std;

double C::dodawanie(double a, double b)
{
    a = a + b;
    cout << "wynik: " << a;
    return a;
}

double C::odejmowanie(double a, double b)
{
    a = a - b;
    cout << "wynik: " << a;
    return a;
}

double C::mnozenie(double a, double b)
{
    a = a * b;
    cout << "wynik: " << a;
    return a;
}

double C::dzielenie(double a, double b)
{
    if (b == 0)
    {
        cout << "Nie dziel przez zero!!! Wpisz poprawna wartosc" << endl;
        return a;
    }
    else
    {
        a = a / b;
        cout << "wynik: " << a;
        return a;
    }
}

double C::modulo(double a, double b)
{
    a = std::fmod(a, b);
    cout << a;
    return a;
}

double C::pierwiastek(double a, double b)
{
    a = sqrt(a);
    cout << a;
    return a;
}