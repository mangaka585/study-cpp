/*
    Напишите программу, в которой пользователь вводит размер вектора, и программа
    создает smart-указатель типа unique_ptr и инициализирует его динамическим
    вектором такого размера (пусть вектор хранит значения типа int).
    Инициализируйте все элементы вектора так, чтобы значение элемента по индексу
    i было равно i * i (то есть квадрату числа i).

    Вычислите сумму элементов и выведите результат на консоль.
*/

#include <iostream>
#include <memory>
#include <vector>

int main()
{
    size_t size{};

    std::cout << "Enter a vector size: " << std::endl;
    std::cin >> size;

    std::unique_ptr<std::vector<int>> vector_ptr{std::make_unique<std::vector<int>>()};

    for (uint i = 0; i < size; i++)
    {
        (*vector_ptr).push_back(i * i);
    }

    int sum{};
    for (auto i = 0; i < size; i++)
    {
        sum += (*vector_ptr)[i];
    }

    std::cout << "Result: " << sum << std::endl;

    return 0;
}