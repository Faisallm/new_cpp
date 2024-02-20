#include <iostream>
using namespace std;

// we are modifying global variables, hence  the  need for a...
// using reference,  &
template<typename T>
void Swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5, b = 7;
    cout << a << " - " << b << endl;
    // <int>, indicates that we...
    // are passing int to this generic datatype
    Swap<int>(a, b);
    cout << a << " - " << b << endl;

    char c = 'F', d = 'A';
    cout << c << " - " << d << endl;
    Swap<char>(c, d);
    cout << c << " - " << d << endl;

    system("pause>0");
}

