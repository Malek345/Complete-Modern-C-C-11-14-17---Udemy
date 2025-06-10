#include <iostream>
using namespace std;


int main(){
    /*//Try to modify x1 & x2 and see the compilation output
    int x = 5 ;
    const int MAX = 12 ;
    int &ref_x1 = x ;
    const int &ref_x2 = x ;
    ref_x1 = 10; // This is allowed since ref_x1 is a non-const reference
    //ref_x2 = 15; // This will cause a compilation error since ref_x2 is a const reference
    cout << "x: " << x << endl;
    cout << "ref_x1: " << ref_x1 << endl;
    cout << "ref_x2: " << ref_x2 << endl;*/

    /*//Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
    int x = 5 ;
    const int MAX = 12 ;
    const int *ptr1 = &x ;
    int *const ptr2 = &x ;
    const int * const ptr3 = &x ;
   
    // Modifying through ptr1
    // *ptr1 = 8; // Error: cannot modify value through const int*
    ptr1 = &MAX; // Allowed: can change where ptr1 points

    // Modifying through ptr2
    *ptr2 = 9; // Allowed: can modify value through int* const
    // ptr2 = &MAX; // Error: cannot change where ptr2 points

    // Modifying through ptr3
    // *ptr3 = 10; // Error: cannot modify value through const int* const
    // ptr3 = &MAX; // Error: cannot change where ptr3 points

    cout << "x: " << x << endl;
    cout << "*ptr1: " << *ptr1 << endl;
    cout << "*ptr2: " << *ptr2 << endl;
    cout << "*ptr3: " << *ptr3 << endl;*/

    //Find which declarations are valid. If invalid, correct the declaration
    int x = 5 ;
    const int MAX = 12 ;
    int &ref_x1 = x ;
    const int &ref_x2 = x ;
    const int *ptr1 = &x ;
    int *const ptr2 = &x ;
    const int *ptr3 = &MAX ;
    //int *ptr4 = &MAX ;
    const int *ptr4 = &MAX ; // This line is invalid because MAX is a const int, so we cannot have a non-const pointer to it.
    const int &r1 = ref_x1 ; 
    //int &r2 = ref_x2 ;
    const int &r2 = ref_x2 ; // This line is invalid because ref_x2 is a const reference, so we cannot have a non-const reference to it.
    //int *&p_ref1 = ptr1 ;
    //const int*&p_ref2 = ptr2 ;
    const int *&p_ref1 = ptr1 ; 
    int *const &p_ref2 = ptr2 ;
}