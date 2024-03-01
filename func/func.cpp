#include <iostream>
#include <cmath>  // in order to be able to use math functions

// importing functions from std namespace
using std::cout;
using std::cin;

// custom function
// this function is declaring and its defining

double power(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}


// a function should only do one thing.

void print_pow(double base, int exponent) {

    double myPower = power(base, exponent);
    cout << base << " raise to the " << exponent << " power is " << myPower << std::endl;
}


int main()
{

    double base;
    int exponent;

    cout << "What is the base? ";
    cin >> base;

    cout << "What is the exponent?: ";
    cin >> exponent;

    // its a void function without a return value
    // its purpose is to produce a side-effect.

    print_pow(base, exponent);
    print_pow(100, 4);
    print_pow(4, 2);

}
