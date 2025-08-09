// Checking Memory Locations and Member Variable Equality of Class Objects

#include <iostream>
#include <string>

class University {
public:
    std::string name;
    std::string country;
};

int main() {
    University uni1;
    University uni2;
    std::cout << "Location of uni1: " << &uni1 << std::endl;
    std::cout << "Location of uni2: " << &uni2 << std::endl;

    if(&uni1 == &uni2) {
        std::cout << "The objects are at the same location in memory." << std::endl;
    }
    else {
        std::cout << "The objects are at different locations in memory." << std::endl;
    }

    std::cout << "uni1 - name: " << uni1.name << ", country: " << uni1.country << std::endl;
    std::cout << "uni2 - name: " << uni2.name << ", country: " << uni2.country << std::endl;

    uni1.name = "Imperial College London";
    uni1.country = "England";
    uni2.name = "Brac University";
    uni2.country = "Bangladesh";

    std::cout << "After modification:" << std::endl;
    std::cout << "uni1 - name: " << uni1.name << ", country: " << uni1.country << std::endl;
    std::cout << "uni2 - name: " << uni2.name << ", country: " << uni2.country << std::endl;

    if(uni1.name == uni2.name && uni1.country == uni2.country) {
        std::cout << "The instance variables of both objects are the same." << std::endl;
    }
    else {
        std::cout << "The instance variables of both objects are different." << std::endl;
    }

    return 0;
}