// Design a Bird Class with Methods for Flying Up, Down, and Making Noise

#include <iostream>
#include <string>

using namespace std;
class Bird {
public:
    string name;
    int altitude = 0;
    void flyUp(int x) {
        altitude += x;
        cout << name << " flies up to " << altitude << " meters." << endl;
    }
    void flyDown(int x) {
        altitude -= x;
        if(altitude < 0)
            altitude = 0;
        cout << name << " flies down to " << altitude << " meters." << endl;
    }
    void makeNoise() {
        cout << name << " says chirp chirp!" << endl;
    }
};

int main() {
    Bird b1;
    b1.name = "Parrot";
    b1.flyUp(3);
    b1.makeNoise();
    b1.flyDown(5);
    b1.flyDown(2);
    b1.flyDown(1);

    Bird b2;
    b2.name = "Eagle";
    b2.flyUp(5);
    b2.flyDown(5);
    b2.makeNoise();

    return 0;
}