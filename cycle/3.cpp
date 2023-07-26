/*
    Напишите программу, в которой в цикле while пользователь вводит произвольное
    количество чисел, а программа вычисляет их сумму. После каждого ввода
    спрашивайте пользователя, закончил ли он ввод чисел. Если пользователь ввел
    "y" или "Y", то ввод чисел завершается, после чего программа должна вывести
    сумму всех введенных чисел и их среднее арифметическое.
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int sum = 0;
    int count = 0;

    while (true)
    {
        int current_number = 0;
        char answer;

        cout << "Введите произвольное число" << endl;
        cin >> current_number;

        cout << "Вы закончили ввод чисел? (y/n)" << endl;
        cin >> answer;

        sum += current_number;
        count++;

        if (answer == 'y' || answer == 'Y')
        {
            break;
        }
    }

    cout << "Сумма всех введенных чисел - " << sum << endl;
    cout << "Среднее арифметическое введенных чисел - " << (static_cast<double>(sum) / count) << endl;

    return 0;
}