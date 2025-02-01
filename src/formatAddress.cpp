#include <iostream>
#include <string>
#include "formatAddress.h"

using namespace std;

void formatAddress() {
    string city, street;
    int house, apartment;

    getline(cin, city);
    cout << "Улица: ";
    getline(cin, street);
    cout << "Номер дома: ";
    cin >> house;
    cout << "Номер квартиры: ";
    cin >> apartment;

    cout << "г. " << city << ", ул. " << street << ", д. " << house << ", кв. " << apartment << endl;
}