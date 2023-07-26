/*
    Напишите программу, в которой определен одномерный массив чисел int.
    Пользователь должен вводить с консоли значения для всех элементов массива.
    После завершения ввода всех чисел программа должна вывести элементы массива в обратном порядке.
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int size_of_array = 4;
    int numbers[size_of_array];

    for (int i = 0; i < size_of_array; i++)
    {
        int n = 0;

        cout << "Введите любое целое число" << endl;
        cin >> n;

        numbers[i] = n;
    }

    cout << "\nЭлементы массива в обратном порядке:" << endl;

    for (int i = size_of_array; i > 0; i--)
    {
        cout << numbers[i - 1] << endl;
    }

    return 0;
}