#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "rows, cols:";
    cin >> rows >> cols;
    // we are creating a pointer to a pointer
    // pointing to an array of pointers.
    // 
    int** table = new int*[rows];
    for (int i = 0; i < rows; i++) {
        table[i] = new int[cols];
    }

    table[1][2] = 88;

    for (int i = 0; i < rows; i++) {
        delete[] table[i];
    }
    delete[] table;
    table = NULL;

    //always de-allocate dynamic memory

    system("pause>0");
    return 0;
}

