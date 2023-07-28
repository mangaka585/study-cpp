
/*
    Напишите программу, в которой с помощью функции std::cin.getline() пользователь
    вводит строку с консоли в массив символов. С помощью цикла подсчитайте количество
    символов, введенных пользователем. Затем с помощью второго цикла выведите
    все символы введенной строки в обратном порядке.
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    const int max_length = 100;
    char input[max_length];

    cout << "Enter an any word" << endl;
    cin.getline(input, max_length);

    int count = 0;
    for (; count < max_length && input[count] != '\0'; ++count)
        ;

    cout << count << endl;

    for (int i = 1; i <= count; ++i)
    {
        cout << input[count - i];
    }

    cout << endl;

    return 0;
}