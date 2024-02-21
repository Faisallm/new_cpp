#include <iostream>
using namespace std;

// function that receives a pointer.
// get the pointer of the variable.
void printNumber(int* numberPtr) {
    // writhing out the value of a pointer
    // de-referencing
    cout << *numberPtr << endl;
}

void printLetter(char* charPtr) {
    // writhing out the value of a pointer
    // de-referencing
    cout << *charPtr << endl;
}

void print(void* ptr, char type) {
    switch (type) {
    case 'i': cout << *((int*)ptr) << endl; break;
    case 'c': cout << *((char*)ptr) << endl; break;

    }
}

int main()
{
    // a void pointer is a special type of pointer...
    // that holds the memory address of variables...
    // of any datatype.

    // it has some limitations,  you cannot...
    // directly dereference a void pointer.

    int number = 5;
    char letter = 'a';
    /*printNumber(&number);
    printLetter(&letter);*/
    print(&number, 'i');
    print(&letter, 'c');

    system("pause>0");
    return  0;
}

