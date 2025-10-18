#include "date.h"
#include <iostream>

using namespace std;

int main() {
    Date date;

    cout << "Enter a date: " << endl;
    date.Input();
    cout << "Current date: ";
    date.Output();

    if (!date.IsValid()) {
        cout << "Invalid date entered!" << endl;
    } else {
        date.PrevDate();
        cout << "Previous date: ";
        date.Output();
    }

    return 0;
}
