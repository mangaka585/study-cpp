/*
    Создайте класс Integer с одной приватной переменной типа int.
    Определите конструктор класса, который выводит сообщение при создании объекта.
    Определите функции для получения и установки переменной и вывода ее значения.
    В функции main создайте объект класса Integer и вызовите у него функции класса,
    получая, устанавливая и выводя значение переменной каждого объекта.
*/

#include <iostream>

using namespace std;

class Integer
{
private:
    int a = 0;

public:
    Integer()
    {
        cout << "Object of class Integer has been created." << endl;
    }

    void setValue(int p_a)
    {
        a = p_a;
    }

    int getValue()
    {
        return a;
    }
};

int main()
{
    Integer x{};

    x.setValue(10);

    cout << "The value is " << x.getValue() << endl;

    return 0;
}