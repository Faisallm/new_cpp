#include <iostream>
using namespace std;

int main()
{

    // let's talk about data-types

    // most common datatypes we will be using.

    // integer datatypes
    int yearOfBirth = 1998;
    // character datatypes
    char gender = 'm';
    // boolean value
    bool isOlderThan18 = true;
    // float/decimal point (stores 4 bytes of floating point number)
    float averageGrade = 4.5;
    // double (stores 16 bytes of floating point number)
    // basically its stores more decimal points
    double balance = 43445636565;

    cout << yearOfBirth << gender << isOlderThan18 << averageGrade << balance;

    cout << yearOfBirth << endl;
    // so true is also equals to 1
    cout << isOlderThan18  << endl;

    // in order to check the space a particular datatype is using.

    cout << "Size of int is " << sizeof(int) << " bytes" << endl; 

    cout << "Int min value is " << INT_MIN << endl;
    
    cout << "Int max value is " << INT_MAX << endl;

    // checking the sizeof unsigned int
    cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes" << endl;
    cout << "Size of bool is " << sizeof(bool) << " bytes." << endl;
    cout << "Size of char is " << sizeof(char) << " char." << endl;
    cout << "Size of float is " << sizeof(float) << " bytes." << endl;
    cout << "Size of double is " << sizeof(double) << " bytes." << endl;
    // checking the max size of unsigned int
    cout << "UInt max value is " << UINT_MAX << endl;


    system("pause>0");
}
