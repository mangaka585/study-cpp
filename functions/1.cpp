/*
    Напишите функцию, которая считывает с консоли строку или массив символов
    и возвращает строку, где символы размещены в обратном порядке
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string revert(string str);

int main()
{
    string str{};

    cout << "Введите любые симовлы (слова):" << endl;
    getline(cin, str);
    cout << revert(str) << endl;

    return 0;
}

string revert(string str)
{
    int string_size = str.length();
    string result{};

    for (int i = string_size; i >= 0; i--)
    {
        result.push_back(str[i]);
    }

    return result;
}
