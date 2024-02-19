#include <iostream>
#include <iomanip>
using namespace std;

// we are going to use the iomanip library...
// because of a function that allows us to...
// setwidth, spacing in our output.

int main()
{
    // drawing shapes using c++
    int height, width;
    char symbol;
    
    cout << "Height: ";
    cin >> height;
    cout << "Width: ";
    cin >> width;

    cout << "Enter symbol--> ";
    cin >> symbol;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            // setw() allows
            cout << setw(3) << symbol;
        }
        cout << endl;
    }


    system("pause>0");
}


