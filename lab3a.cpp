// COMSC-210 | Lab 3a | Tianyi Cao
#include <iostream>
#include <string>
#include <vector>
#include <iomainip>

using namespace std

Restaurant getData();

struct Restaurant {
    string name;
    string address;
    int rating;
    double price;
    bool delivery;
}

int main() {
    return 0;
}

Restaurant getData() {
    Restaurant temp;
    cout << "Enter restauramt name";
    getline(cin >> temp.name);
    cout << "Enter rating (1-5): ";
    while(!(cin >> temp.rating) || temp.rating < 1 || temp.rating>5) {
        cout << "ERROR: Please enter a number between 1 and 5: ";
        cin.ignore();
    }


    return temp;
}
