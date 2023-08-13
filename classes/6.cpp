/*
    Определите абстрактный класс Animal, который представляет животное и
    который имеет две переменных - name (кличка животного) и weight (вес животного).
    Также определите в классе Animal чистую виртуальную функцию makeSound,
    которая представляет произносимые животным звуки, и функцию print,
    которая выводит на консоль имя и вес животного.

    Определите классы Cat (кошка) и Dog (собака), которые наследуются от класса Animal и которые переопределяют функцию makeSound
*/

#include <iostream>

using namespace std;

class Animal
{
public:
    Animal(string name, double weight) : name(name), weight(weight){};
    virtual void makeSound() const = 0;
    virtual void print() const
    {
        cout << "Name: " << this->name << ", weight: " << this->weight << endl;
    }

private:
    string name;
    double weight;
};

class Cat : public Animal
{
public:
    using Animal::Animal;
    virtual void makeSound() const override
    {
        cout << "Meow!" << endl;
    }
};

class Dog : public Animal
{
public:
    using Animal::Animal;
    virtual void makeSound() const override
    {
        cout << "Woof!" << endl;
    }
};

int main()
{
    Cat cat{"Kitty", 10};
    Dog dog{"Bob", 20};

    cat.print();
    cat.makeSound();

    dog.print();
    dog.makeSound();

    return 0;
}