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
    cout <<"Enter address: ";
    getline(cin, temp.address);
    cout << "Enter rating (1-5): ";
    while(!(cin >> temp.rating) || temp.rating < 1 || temp.rating>5) {
        cout << "ERROR: Please enter a number between 1 and 5: ";
        cin.ignore();
    }
    cin.ignore();
    cout << "Enter average price: ";
    getline(cin, temp.price);
    cout << "Has delivery? (1 for Yes, 0 for No): ";
    while(!(cin >> temp.delivery) || (temp.delivery != 0 && temp.delivery != 1)) {
        cout << "ERROR: Enter 1 or 0: ";
        cin.ignore();
    }
    cin.ignore();
    
    return temp;
}
