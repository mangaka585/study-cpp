/*
    Напишите программу, которая предлагает ввести два целых числа, а затем использует конструкцию
    if-else для вывода сообщения о том, равны ли два числа.
*/

#include <iostream>

int main()
{
    int a, b;

    std::cout << "Введите 2 числа через пробел" << std::endl;
    std::cin >> a >> b;

    std::cout << (a == b ? "Вы ввели одинаковые числа" : "Вы ввели разные числа") << std::endl;

    return 0;
}
