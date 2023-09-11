/*
    Определите вектор (объект vector) для хранения чисел типа int.
    Пусть пользователь сначала вводит с консоли число N - размер вектора.
    Затем в цикле с консоли вводит N чисел, которые добавляются в данный вектор.
    После ввода в цикле выведите все числа из вектора в строчку в обратном порядке.
*/

#include <iostream>

int main()
{
    size_t size{};

    std::cout << "Input vector size:" << std::endl;
    std::cin >> size;

    std::vector<int> vector;

    for (uint i = 0; i < size; i++)
    {
        int number{};

        std::cout << "Input element #" << i + 1 << std::endl;
        std::cin >> number;

        vector.push_back(number);
    }

    std::cout << "Result: ";

    for (auto i = size; i > 0; i--)
    {
        std::cout << vector[i - 1];
    }

    std::cout << std::endl;

    return 0;
}