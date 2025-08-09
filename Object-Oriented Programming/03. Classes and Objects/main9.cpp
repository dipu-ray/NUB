// Implement Contact Storage and Retrieval in a Phone Class Using Vectors

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class CellPhone {
public:
    vector<string> contacts;
    void storeContact(const string &contact) {
        contacts.push_back(contact);
    }
    void printDetails() {
        cout << "Stored Contacts:" << endl;
        for(const string &contact : contacts) {
            cout << contact << endl;
        }
    }
};

int main() {
    CellPhone phone1;
    phone1.printDetails();

    cout << "1##################" << endl;
    phone1.storeContact("Joy - 01834");
    cout << "===================" << endl;
    phone1.printDetails();

    cout << "2##################" << endl;
    phone1.storeContact("Toya - 01334");
    phone1.storeContact("Aayan - 01135");
    cout << "===================" << endl;
    phone1.printDetails();

    cout << "3##################" << endl;
    phone1.storeContact("Sani - 01441");
    cout << "===================" << endl;
    phone1.printDetails();

    return 0;
}