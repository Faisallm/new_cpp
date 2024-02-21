#include <iostream>
using namespace std;

int main()
{
    // restricted arrays leads to fast data retrieval
    int size;
    cout << "Size: ";
    cin >> size;

    // creating dynamic arrays.
    // the address of the first element of the array...
    // is stored in the Array pointer.

    // new is a command that will allocate memory when we need it.
    // using dynamic memory requires us to deallocate the memory...
    // when we no longer need it.
    int* myArray = new int[size];

    // entering elements into a dynamic array.
    for (int i = 0; i < size; i++) {
        cout << "Array[" << i << "] ";
        cin >> myArray[i];
    }

    // outputting the elements of a dynamic array using...
    // indexing or de-referincing.
    for (int i = 0; i < size; i++) {
        //cout << myArray[i] << " ";
        // using de-referencing.
        cout << *(myArray+i) << " ";
    }
    // de-allocating a dynamic memory...
    // when we no longer need it.
    delete[]myArray;
    myArray = NULL;

    system("pause>0");
}
