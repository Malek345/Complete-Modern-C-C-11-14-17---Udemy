#include <iostream>
using namespace std;

void Add(int a, int b, int &result) {
    result = a + b;
}

void Factorial(int a, int &result) {
    result = 1;
    for (int i = 1; i <= a; ++i) {
        result *= i;
    }
}

void Swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 3, result;

    // Add x and y, store the result in 'result'
    Add(x, y, result);
    cout << "Addition of " << x << " and " << y << " is: " << result << endl;

    // Calculate factorial of x, store the result in 'result'
    Factorial(x, result);
    cout << "Factorial of " << x << " is: " << result << endl;

    // Swap x and y
    Swap(x, y);
    cout << "After swapping, x = " << x << ", y = " << y << endl;

    return 0;
}