#pragma once
#include <string>

class Student {
private:
    std::string name;
    double math_score;
    double literature_score;

public:
    void Input();
    void Output() const;
    double Average() const;
};
