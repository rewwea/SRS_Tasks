#include <iostream>
#include <string>
#include "reverseCities.h"

using namespace std;

void reverseCities() {
    string input;
    getline(cin, input);

    string result = "";
    string city = "";

    for (int i = input.length() - 1; i >= 0; --i) {
        if (input[i] == ' ') {
            if (!city.empty()) {
                result = city + ";" + result;
                city = "";
            }
        } else {
            city = input[i] + city;
        }
    }

    if (!city.empty()) {
        result = city + ";" + result;
    }

    if (!result.empty() && result.back() == ';') {
        result.pop_back();
    }

    cout << result << endl;
}