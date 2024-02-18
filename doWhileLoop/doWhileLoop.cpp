#include <iostream>
using namespace std;

int main()
{
    int  usersPin = 1234, pin, error_counter = 0;

    do {
        cout << "PIN: ";
        cin >> pin;

        if (pin != usersPin) {
            error_counter++;
        }
    } while (error_counter < 3 && pin != usersPin);

    if (error_counter < 3) {
        cout << "Congratuations, Loading...";
    }
    else {
        cout << "Account blocked...";
    }

    system("pause>0");
}


