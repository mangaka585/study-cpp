/*
    Напишите функцию, которая возводит число в определенную степень.
    В качестве параметров функция должна принимать само число и показатель степени.
    А в качестве результата возвращать результат возведения числа в степень.
    Степень может быть как положительной, так и отрицательной.
*/

#include <iostream>

using namespace std;

double exp(double number, int exp);

int main()
{
    double number{};
    int x{};

    cout << "Enter a number:" << endl;
    cin >> number;
    cout << "Enter an exponent value: " << endl;
    cin >> x;

    cout << "Resut: " << exp(number, x) << endl;

    return 0;
}

double exp(double number, int exp)
{
    double result{1.0};

    if (exp > 0)
    {
        for (int i = 1; i <= exp; i++)
        {
            result *= number;
        }
    }
    else
    {
        for (int i = exp; i >= exp; i--)
        {
            result /= number;
        }
    }

    return result;
}