#include <iostream>
using namespace std;

// this c++ program is all about swapping variables


int main()
{  

    // without using a third variable
    int a = 20;
    int b = 10;
    cout << "a = " << a << "b = " << b << endl;

    a += b;
    b = a - b;
    a -= b;

    cout << "a = " << a << "b = " << b << endl;
    system("pause>0");
}
