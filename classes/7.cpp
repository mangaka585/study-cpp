/*
Дан класс:

#include <iostream>

class Integer
{
public:
    Integer(double n)
    {
        value = n;
    }

    void print()  const
    {
        std::cout << "value: " << value << std::endl;
    }
private:
    double value;
};

Определите для класса Integer оператор, который позволяет умножать объект Integer на число.
Причем определите версии для умножения как на целое, так и на дробное число.
*/

#include <iostream>

class Integer
{
public:
    Integer(double n)
    {
        value = n;
    }

    void print() const
    {
        std::cout << "value: " << value << std::endl;
    }

    int operator*(int number) const
    {
        return this->value * number;
    }
    double operator*(double number) const
    {
        return this->value * number;
    }

private:
    double value;
};

int main()
{
    Integer number{10.5};

    std::cout << number * 2 << std::endl;
    std::cout << number * 1.5 << std::endl;

    return 0;
}