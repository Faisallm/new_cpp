#include <iostream>
using namespace std;


// you can define default parameters only at the end of...
// parameter list.
void introduceMe(string name, string city="kano", int age = 0) {
    cout << "My name is " << name << endl;
    cout << "I am from " << city << endl;
    if (age != 0)
        cout << "I am " << age << " years old " << endl;
}

int main()
{
    string name, city;
    int age;
    cout << "Name: ";
    cin >> name;
    cout << "city: ";
    cin >> city;
    cout << "Age: ";
    cin >> age;

    introduceMe(name, city, age);

    system("pause>0");
}

