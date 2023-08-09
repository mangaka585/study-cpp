/*
    Определите базовый класс Animal, который представляет животное и который содержит две приватные переменные:
    строку для хранения имени животного и целое число для хранения веса животного.
    Также определите общедоступную функцию print, которая выводит на консоль сообщение с указанием имени и веса объекта Animal.

    Также создайте два производных класса Cat (кошка) и Dog (собака), которые наследуются от класса Animal.
    В функции main создайте несколько объектов типа Cat и Dog и с помощью функции print выведите информацию об этих объектах на консоль.
*/

#include <iostream>

class Animal
{
public:
    Animal(std::string name, int age);
    void print();

private:
    std::string name;
    int age;
};

class Cat : public Animal
{
    using Animal::Animal;
};

class Dog : public Animal
{
    using Animal::Animal;
};

Animal::Animal(std::string name, int age)
{
    this->age = age;
    this->name = name;
}
void Animal::print()
{
    std::cout << "Name is " << this->name << " and age is " << this->age << std::endl;
}

int main()
{
    Cat cat{"Tom", 12};
    Dog dog{"Pipa", 14};
    cat.print();
    dog.print();

    return 0;
}