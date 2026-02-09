// COMSC-210 | Lab 3a | Tianyi Cao
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

// Global constant to avoid magic numbers and easily scale the collection size
const int MAX = 4;

struct Restaurant {
    string name;
    string address;
    int rating;
    double price;
    bool delivery;
};
// Function prototypes
Restaurant getData();

void display(const Restaurant &r);

int main() {
    vector<Restaurant> list;
    for (int i=0;i<MAX;i++){
        cout << "Restaurant "<<(i+1)<<":"<<endl;
        list.push_back(getData());
    }

    for (int i = 0;i<list.size();i++){
        display(list[i]);
    }
    return 0;
}

Restaurant getData() {
    Restaurant temp;
    cout << "Enter restauramt name";
    getline(cin, temp.name);
    cout <<"Enter address: ";
    getline(cin, temp.address);
    cout << "Enter rating (1-5): ";
    // Validation loop for rating to ensure it stays within the 1-5 range
    while(!(cin >> temp.rating) || temp.rating < 1 || temp.rating>5) {
        cout << "ERROR: Please enter a number between 1 and 5: ";
        cin.ignore();
    };
    cout << "Enter average price: ";
    cin >> temp.price;
    // Validation loop for delivery status using integer 0/1 to represent boolean
    cout << "Has delivery? (1 for Yes, 0 for No): ";
    while(!(cin >> temp.delivery) || (temp.delivery != 0 && temp.delivery != 1)) {
        cout << "ERROR: Enter 1 or 0: ";
        cin.ignore();
    };
    cin.ignore();
    

    return temp;
};

//display: Prints restaurant data in a formatted style.
void display(const Restaurant &r) {
    cout << "\t> Name: " << r.name << endl;
    cout << "\t> Address: " << r.address << endl;
    cout << "\t> Rating: " << r.rating  << endl;
    cout << "\t> Price: $" << r.price << endl;
    cout << "\t> Delivery: ";
    r.delivery ? cout << "yes" : cout << "no";
    cout << endl;
};
