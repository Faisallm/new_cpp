#include <iostream>
using namespace std;

bool isPrimeNumber(int number);

int main()
{
    for (int i = 1; i <= 1000;i++) {
        bool isPrime = isPrimeNumber(i);
        if (isPrime)
            cout << i << " is prime number" << endl;
    }

    system("pause>0");
}

bool isPrimeNumber(int number) {
    bool isPrimeFlag = true;

    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            isPrimeFlag = false;
            break;
        }
    }

    return isPrimeFlag;
}