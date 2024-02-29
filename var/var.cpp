#include <iostream>
using std::cout;

int main()
{

    int slices = 5;  // declaration

    cout << "You Have " << slices << " slices of pizza." << std::endl;
    
    // we are printing an integer.
    // with cout, we don't need to specify which type the variable is.
    // in c++ printf is gabage
    printf("%i\n", slices);


    return 0;
}
