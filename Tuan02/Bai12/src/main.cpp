#include "student_list.h"
#include <iostream>

using namespace std;

int main() {
    StudentList list;
    list.Input();
    list.Output();

    Student top = list.FindHighestAverage();
    Student bottom = list.FindLowestAverage();

    cout << "\nStudent with the highest average score:" << endl;
    top.Output();
    cout << endl;

    cout << "\nStudent with the lowest average score:" << endl;
    bottom.Output();
    cout << endl;

    return 0;
}
