#include <iostream>
using namespace std;

int main()
{
    // a pointer is also a container.
    // but instead of storing a value, it also stores...
    // an address.

    int n = 5;
    cout << n << endl;
    // this gives us the memory address of this variable.
    cout << &n << endl;

    // a pointer is a container that stores a memory address 
    int* ptr = &n;
    cout << ptr << endl;
    //  in  order to access the value stored  in the  memory address...
    // of  the pointer.
    cout << *ptr << endl;
    //  we can also change this value
    *ptr = 10;
    cout << *ptr << endl;
    cout << n << endl;
    // the type of the pointer should be equal to the type of the...
    // of the value its pointing to.


    // creating a pointer
    int v;
    int* ptr2 = &v;
    // de-referencing
    *ptr2 = 7;
    cout << "v=" << v;
    

    system("pause>0");
    return 0;
}


