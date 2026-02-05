// Define a Class with Default Member Variables and Change Them per Object

#include <iostream>
#include <string>

class Vehicle {
public:
    std::string type = "Car";
    int wheels = 4;
    std::string color = "Black";
};

int main() {
    Vehicle car;
    std::cout << "Attributes of car object:" << std::endl;
    std::cout << car.type << std::endl;
    std::cout << car.wheels << std::endl;
    std::cout << car.color << std::endl;
    std::cout << "=========" << std::endl;

    Vehicle bike;
    bike.type = "Motor bike";
    bike.wheels = 2;
    bike.color = "Red";

    std::cout << "Attributes of bike object:" << std::endl;
    std::cout << bike.type << std::endl;
    std::cout << bike.wheels << std::endl;
    std::cout << bike.color << std::endl;

    return 0;
}