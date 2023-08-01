/*
    Возьмите класс Integer из предыдущего задания и разделите объявление функций класса от их определения.
*/

#include <iostream>

using namespace std;

class Integer
{
private:
    int a = 0;

public:
    Integer();
    void setValue(int p_a);
    int getValue();
};

Integer::Integer()
{
    cout << "Object of class Integer has been created." << endl;
}

void Integer::setValue(int p_a)
{
    a = p_a;
}

int Integer::getValue()
{
    return a;
}

int main()
{
    Integer x{};

    x.setValue(10);

    cout << "The value is " << x.getValue() << endl;

    return 0;
}