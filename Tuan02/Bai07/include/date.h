#pragma once

class Date {
private:
    int day;
    int month;
    int year;

    bool IsLeapYear() const;
    int DaysInMonth() const;

public:
    void Input();
    void Output() const;
    bool IsValid() const;
    void PrevDate();
};
