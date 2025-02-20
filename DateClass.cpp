// DateClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Date.h"

using namespace std;

int main() {
    
    cout << "Test default constructor: " << endl;
    Date d1;
    cout << d1.toString1() << endl; 
    cout << d1.toString2() << endl; 
    cout << d1.toString3() << endl; 

    
    cout << "\nTest constructor with valid date: " << endl;
    Date d2(2, 28, 2009);
    cout << d2.toString1() << endl; 
    cout << d2.toString2() << endl; 
    cout << d2.toString3() << endl; 
    
    cout << "\nTest constructor with invalid month (45, 2, 2009): " << endl;
    Date d3(45, 2, 2009);
    cout << d3.toString1() << endl; 

   
    cout << "\nTest constructor with invalid day (2/29/2009): " << endl;
    Date d4(2, 29, 2009);
    cout << d4.toString1() << endl; 

    
    cout << "\nTest setDate with bad month (13): " << endl;
    d1.setDate(13, 5, 2020);
    cout << d1.toString1() << endl; 

    
    cout << "\nTest setDate with bad day (4/31/2020): " << endl;
    d1.setDate(4, 31, 2020);
    cout << d1.toString1() << endl; 

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
