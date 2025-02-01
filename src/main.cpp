#include <iostream>
#include "formatNumbers.h"
#include "reverseCities.h"
#include "formatAddress.h"

using namespace std;

int main() {
    int task;
    cout << "Выберите задачу (1, 2 или 3): ";
    cin >> task;

    if (task == 1) {
        formatNumbers();
    } else if (task == 2) {
        cin.ignore();
        reverseCities();
    } else if (task == 3) {
        cin.ignore();
        formatAddress();
    } else {
        cout << "Неверный выбор задачи!" << endl;
    }

    return 0;
}