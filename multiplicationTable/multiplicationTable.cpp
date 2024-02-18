#include <iostream>
using namespace std;

int main()
{
    // Multiplication Table
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        // to create spacing so as to look nicer
        cout << endl;
    }

    system("pause>0");
}

