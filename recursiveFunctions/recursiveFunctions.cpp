#include <iostream>
using namespace std;

// a recursive function is a function that invokes itself.


int recursiveSum(int m, int n) {
    if (m == n)
        return  m;

    return m + recursiveSum(m + 1, n);
}

int recursiveFactorial(int a) {
    if (a == 1)
        return a;
    return a * recursiveFactorial(a - 1);
}

int main()
{
    //int m = 2, n = 4;
    //int sum = 0;
    //for (int i = m; i <= n; i++) {
    //    sum += i;
    //}
    int  m = 2, n = 553;
    cout << "Sum = " << recursiveSum(m, n) << endl;

    int a = 5;
    cout << "Recursion = " << recursiveFactorial(a);

    //cout << "Sum=" << sum;


    system("pause>0");
}
