#include <iostream>
using namespace std;

int main()
{
    int intMax = INT_MAX;
    cout << intMax << endl;
    // this is an example of datatype overflow.
    // damn!!, I have been programming for this...
    // long without knowing this.
    cout << intMax + 1;

    system("pause>0");

}

