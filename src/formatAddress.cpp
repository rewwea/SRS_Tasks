#include <iostream>
#include <string>
#include "formatAddress.h"

using namespace std;

void formatAddress() {
    string city, street;
    int house, apartment;

    getline(cin, city);
    getline(cin, street);
    cin >> house;
    cin >> apartment;

    cout << "г. " << city << ", ул. " << street << ", д. " << house << ", кв. " << apartment << endl;
}