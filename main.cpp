//Author: Payton Donnelly
//Created: 9-5-18
//Modified: 9-6-18
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int fibonacci(int);
    cout << "Which number in the fibonacci sequence would you like to find?" << endl;
    cin >> n;
    fibonacci(n);
    return 0;
}

int fibonacci(int n) {
    int fib0 = 1;
    int fib1 = 1;
    int fib2 = 0;
    int fib3 = 0;
    int c = 1;
    for (c = 0; c <= n; c++) {
        if (n == 1) {
            fib3 = fib0;
        }
        else {
            fib3 = fib2 + fib1;
            fib2 = fib1;
            fib1 = fib3;
        }
    }
    cout << fib3 << endl;
}
