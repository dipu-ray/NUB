// Create a Class with Default Values and Update Member Variables

#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int id;
    Student() {
        name = "Bob";
        id = 1;
    }
};

int main() {
    Student s1;
    std::cout << "Name of the Student: " << s1.name << std::endl;
    std::cout << "ID of the Student: " << s1.id << std::endl;
    s1.id = 123;
    std::cout << "ID of the Student: " << s1.id << std::endl;

    return 0;
}