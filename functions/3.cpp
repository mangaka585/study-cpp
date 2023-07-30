/*
    Напишите функцию add(), которая складывает два значения и возвращает их сумму.
    Предоставьте перегруженные версии для сложения значений типов int, double и string
*/

#include <iostream>

using namespace std;

int add(int a, int b);
double add(double a, double b);
string add(string a, string b);

int main()
{
    const int a = 10;
    const int b = 20;

    cout << a << " + " << b << " = " << add(a, b) << endl;

    const double c = 10.5;
    const double d = 10.5;

    cout << c << " + " << d << " = " << add(c, d) << endl;

    const string e = "hello";
    const string f = "mate";

    cout << e << " + " << f << " = " << add(e, f) << endl;

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

string add(string a, string b)
{
    return a + " " + b;
}
