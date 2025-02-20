#include "Date.h"
#include <iostream>
#include <string>

using namespace std;

Date::Date(int m, int d, int y) {
    setDate(m, d, y); 
}

void Date::setDate(int m, int d, int y) {
    
    if (m < 1 || m > 12) {
        cout << "Month invalid" << endl;
        month = 1;
        day = 1;
        year = 1900;
        return;
    }

    
    int lastDayOfMonth = lastDay(m, y);
    if (d < 1 || d > lastDayOfMonth) {
        cout << "Day invalid" << endl;
        month = 1;
        day = 1;
        year = 1900;
        return;
    }

    
    month = m;
    day = d;
    year = y;
}

int Date::getMonth() const {
    return month;
}

int Date::getDay() const {
    return day;
}

int Date::getYear() const {
    return year;
}

bool Date::isLeapYear(int y) const {
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        return true;
    }
    return false;
}

bool Date::isLeapYear() const {
    return isLeapYear(year);
}

int Date::lastDay(int m, int y) const {
    switch (m) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        return isLeapYear(y) ? 29 : 28;
    default:
        return 0; 
    }
}

int Date::lastDay() const {
    return lastDay(month, year);
}

string Date::toString1() const {
    return to_string(month) + "/" + to_string(day) + "/" + to_string(year);
}

string Date::toString2() const {
    static const string months[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    return months[month - 1] + " " + to_string(day) + ", " + to_string(year);
}

string Date::toString3() const {
    static const string months[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    return to_string(day) + " " + months[month - 1] + " " + to_string(year);
}
