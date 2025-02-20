
#ifndef DATE_H
#define DATE_H

#include <string>
#include <iostream>

using namespace std;

class Date {
private:
    int month;
    int day;
    int year;

    bool isLeapYear(int year) const; 
    int lastDay(int month, int year) const; 

public:
    Date(int m = 1, int d = 1, int y = 1900); 
    void setDate(int m, int d, int y); 

    int getMonth() const; 
    int getDay() const; 
    int getYear() const; 

    bool isLeapYear() const; 
    int lastDay() const; 

    string toString1() const; 
    string toString2() const; 
    string toString3() const; 
};

#endif
