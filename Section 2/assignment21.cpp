
#include <iostream>
using namespace std;

// Adds the values pointed to by a and b.
// @param a Pointer to the first integer.
// @param b Pointer to the second integer.
// @return The sum of the integers pointed to by a and b.
int Add(int *a, int *b) {
    return *a + *b;
}

// Adds the values pointed to by a and b, and stores the result in the location pointed to by result.
// @param a Pointer to the first integer.
// @param b Pointer to the second integer.
// @param result Pointer to an integer where the sum will be stored.
void AddVal(int *a, int *b, int *result) {
    *result = *a + *b;
}

// Swaps the values of the integers pointed to by a and b.
// @param a Pointer to the first integer.
// @param b Pointer to the second integer.
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Calculates the factorial of the integer pointed to by a, and stores the result in the location pointed to by result.
// @param a Pointer to the integer whose factorial is to be calculated.
// @param result Pointer to an integer where the factorial result will be stored.
void factorial(int *a, int *result) {
    *result = 1;
    for (int i = 1; i <= *a; ++i) {
        *result *= i;
    }
}

// Main function to demonstrate the usage of the above functions.
int main() {
    int x = 5, y = 3;

    // Example for Add
    cout << "Add: " << Add(&x, &y) << endl;

    // Example for AddVal
    int sum = 0;
    AddVal(&x, &y, &sum);
    cout << "AddVal: " << sum << endl;

    // Example for swap
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    // Example for factorial
    int num = 4, fact = 0;
    factorial(&num, &fact);
    cout << "Factorial of " << num << " is " << fact << endl;
}