// whileLoop3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int main()
{
    // Reversing number

    int number, reversedNumber  = 0;
    cout <<  "Number: ";
    cin >> number;  // 123

    while (number != 0) {
        
        reversedNumber *= 10;
        reversedNumber += number % 10;

        number /= 10;

    }
    cout << "Reversed: " << reversedNumber;
    system("pause>0");
}


