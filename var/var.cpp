#include <iostream>

// cout and cin are part of the std namespace.
using std::cout;
using std::cin;

int main()
{

    int slices;  // declaration

    cout << "Enter slices: ";
    cin >> slices;

    cout << "You Have " << slices << " slices of pizza." << std::endl;


    return 0;
}
