// Implement Polymorphic Behavior Using Virtual Functions in Animal Classes

#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;
    int age;
    string color;

public:
    Animal(string n, int a, string c) : name(n), age(a), color(c) {}
    virtual string info() {
        return "Name: " + name + "\nAge: " + to_string(age) + "\nColor:" + color + "\n";
    }
    virtual void makeSound() = 0;
};

class Dog : public Animal {
private:
    string breed;

public:
    Dog(string name, int age, string color, string breed) : Animal(name, age, color), breed(breed) {}
    string info() override {
        return Animal::info() + "Breed: " + breed + "\n";
    }
    void makeSound() override {
        cout << color << " color " << name << " is barking" << endl;
    }
};

class Cat : public Animal {
private:
    string breed;

public:
    Cat(string name, int age, string color, string breed) : Animal(name, age, color), breed(breed) {}
    string info() override {
        return Animal::info() + "Breed: " + breed + "\n";
    }
    void makeSound() override {
        cout << color << " color " << name << " is meowing" << endl;
    }
};

int main() {
    Dog d1("Tommy", 4, "Brown", "German Shepherd");
    Cat c1("Kitty", 2, "White", "Persian");

    cout << d1.info();
    d1.makeSound();
    cout << c1.info();
    c1.makeSound();

    return 0;
}