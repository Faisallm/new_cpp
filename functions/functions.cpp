#include <iostream>
using namespace std;

/// <summary>
/// function declaration without definition
/// </summary>
void function();


int main()
{
    cout << "Hello World!\n";

    function();
    function();
    function();

    system("pause>0");
}

void function() {
    cout << "Hello from function()" << endl;
}