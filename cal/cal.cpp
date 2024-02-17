#include <iostream>
using namespace std;

int main()
{
    float weight, height, bmi;

    cout << "Enter weight (kg) and height (m): " << endl;
    cin >> weight >> height;

    bmi = weight / (height * height);

    if (bmi < 18.5) {
        cout << "Underweight";
    }
    else if (bmi > 25) {
        cout << "Overweight";
    }
    else {
            cout << "Normal weight";
     }
    cout << "Your Body Mass Index (bmi)  is: " << bmi;
   
    system("pause>0");
}


