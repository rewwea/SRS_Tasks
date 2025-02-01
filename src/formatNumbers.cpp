#include <iostream>
#include <iomanip>
#include "formatNumbers.h"

using namespace std;

void formatNumbers() {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    cout << setfill('0') << setw(3) << num1 << endl;
    cout << setfill('0') << setw(3) << num2 << endl;
    cout << setfill('0') << setw(3) << num3 << endl;
}