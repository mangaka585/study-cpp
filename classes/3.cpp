/*
    Дан следующий класс Integer, который представляет число:

#include <iostream>

class Integer
{
public:
    Integer(int number)
    {
        value=number;
    }
    void print() const
    {
        std::cout << "Value: " << value << std::endl;
    }
private:
    int value;
};

    Добавьте в него конструктор копирования. В функции main создайте один объект Integer и скопируйте его в другой.
*/

#include <iostream>

class Integer
{
public:
    Integer(int number)
    {
        value = number;
    }
    Integer(const Integer &p)
    {
        value = p.value;
    }
    void print() const
    {
        std::cout << "Value: " << value << std::endl;
    }

private:
    int value;
};

int main()
{
    Integer x{10};
    Integer y(x);

    y.print();

    return 0;
}