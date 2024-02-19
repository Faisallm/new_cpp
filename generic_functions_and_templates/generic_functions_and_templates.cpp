#include <iostream>
using  namespace std;

// generics is a term that came along when programmers decided...
// to use the same code to represent different datatypes

// using it, we can pass a type to a function.


// passing arguments using references is like...
// using the global keyword and python
// it allows you to access and to change...
// high level global code.

// creating a template...
// or in other words creating a new type.
template<class T>

// this swap function can be used on any datatype...
// it can accept any datatype as input.
void Swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5, b = 7;
    cout << a << " - " << b << endl;

    // declaration of type is not neccessary...
    // as this is done automatically.
    Swap<int>(a, b);

    cout << a << " - " << b << endl;

    char c = 'c', d = 'd';
    cout << c << " - " << d << endl;

    Swap<char>(c, d);

    cout << c << " - " << d << endl;
    system("pause>0");
}


