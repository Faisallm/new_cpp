#include <iostream>
using namespace std;

int main()
{
    // array
    int luckyNumbers[5];

    //cout << luckyNumbers << endl;
    //cout << &luckyNumbers[0] << endl;
    //cout << *luckyNumbers << endl;
    //cout << luckyNumbers[2] << endl;
    //cout << *(luckyNumbers + 2) << endl;
    //// the asterisk stands for de-referencing.
    //cout << *(luckyNumbers + 3) << endl;

    // entering values in an array
    for (int i = 0; i < 5; i++) {
        cout << "Number: ";
        cin >> luckyNumbers[i];
    }

    for (int i = 0; i <= 5; i++) {
        //cout << luckyNumbers[i] << endl;
        // outputting the values of an array...
        // using pointers and de-referencing.
        // always try to locate memory  locations...
        // that only belong to that arary
        cout << *(luckyNumbers + i) << endl;
    }

    //system("pause>0");

}

