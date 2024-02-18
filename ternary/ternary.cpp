#include <iostream>
using namespace std;

int main()
{
    int hostUserNum, guestUserNum;
    cout << "Host: ";
    cin >> hostUserNum;

    // clear our console, clear our screen
    system("cls");

    cout << "Guest: ";
    cin >> guestUserNum;

    // literally!! what's the difference  with javascript?
    (hostUserNum == guestUserNum) ? cout << "Correct!" : cout << "Failed!";

    system("pause>0");
}
