/*
    Напишите программу, которая выводит квадраты нечетных целых чисел от 1 до предела который вводит пользователь.
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a = 0;

    cout << "Введите любое целое число" << endl;
    cin >> a;

    for (int i = 0; i <= a; i++)
    {
        if (i % 2 != 0)
        {
            cout << i * i << endl;
        }
    }

    return 0;
}