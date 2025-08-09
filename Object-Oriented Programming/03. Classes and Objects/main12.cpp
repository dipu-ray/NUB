// Program to Model Vehicle Movement and Position Tracking with Inheritance

#include <iostream>
using namespace std;

class Vehicle {
public:
    int x, y;
    Vehicle() : x(0), y(0) {}
    void moveUp() { y += 1; }
    void moveDown() { y -= 1; }
    void moveLeft() { x -= 1; }
    void moveRight() { x += 1; }
    void position() { cout << "(" << x << "," << y << ")" << endl; }
};

class Vehicle2010 : public Vehicle {
public:
    void moveLowerLeft() {
        moveLeft();
        moveDown();
    }
    void moveUpperRight() {
        moveRight();
        moveUp();
    }
    void moveLowerRight() {
        moveRight();
        moveDown();
    }
};

int main() {
    Vehicle2010 car1;
    car1.position();
    car1.moveLowerLeft();
    car1.position();

    Vehicle2010 car2;
    car2.position();
    car2.moveUpperRight();
    car2.position();
    car2.moveLowerRight();
    car2.position();

    return 0;
}