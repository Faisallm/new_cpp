#include <iostream>
using namespace std;

int main()
{
    // assigning multiple variables of the same type
    char c1, c2, c3, c4, c5;

    cout << "Enter 5 letters:";

    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    // converts char to ascii number
    cout << "ASCII message: " << int(c1) << ' ' << int(c2)
        << ' ' << int(c3) << ' ' << int(c4) << ' ' << int(c5) << endl;

    int n1 = int(c1);
    int n2 = int(c2);
    int n3 = int(c3);
    int n4 = int(c4);
    int n5 = int(c5);

    // converts ascii number to char
    cout << "English message: " << char(n1) << ' ' << char(n2)
        << ' ' << char(n3) << ' ' << char(n4) << ' ' << char(n5) << endl;

    // remove junk text
    system("pause>0");
}


