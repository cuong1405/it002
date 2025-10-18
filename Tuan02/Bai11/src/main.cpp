#include "student.h"
#include <iostream>

using namespace std;

int main() {
    Student student;
    student.Input();

    cout << "\nStudent Information: " << endl;
    student.Output();

    return 0;
}
