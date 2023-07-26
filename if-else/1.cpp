#include <iostream>

int main()
{
    int a, b;

    std::cout << "Введите 2 числа через пробел" << std::endl;
    std::cin >> a >> b;

    std::cout << (a == b ? "Вы ввели одинаковые числа" : "Вы ввели разные числа") << std::endl;

    return 0;
}
