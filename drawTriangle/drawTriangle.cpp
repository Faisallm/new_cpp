#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int sides;
    char symbol;
    cout << "Sides: ";
    cin >> sides;
    cout << "Symbol: ";
    cin >> symbol;

    for(int i = 1; i <= sides; i++) {
        for (int j = 0; j < i; j++) {
            cout << setw(3) << symbol;
        }
        cout << endl;
    }

    cout << endl << endl;

    for (int i = sides; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << setw(3) << symbol;
        }
        cout << endl;
    }

    system("pause>0");

}


