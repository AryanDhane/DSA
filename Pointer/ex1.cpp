#include <iostream>
#include <vector>
using namespace std;


int main() {
    int a = 10;
    int* ptr = &a; // Pointer to an integer
    int** ptr2 = &ptr; // Pointer to a pointer to an integer

    cout << ptr << endl; // Output the address stored in ptr
    cout << &a << endl; // Output the address of a
    cout << ptr2 << endl; // Output the address stored in ptr2
    cout << &ptr << endl; // Output the address of ptr


    cout << *ptr << endl; // Output the value pointed to by ptr (which is a)
    cout << **ptr2 << endl; // Output the value pointed to by ptr2 (

    return 0;
}
 
// output:
// 0x7ffee3b8c8ac (address of a)
// 0x7ffee3b8c8ac (address of a)
// 0x7ffee3b8c8a0 (address of ptr)
// 0x7ffee3b8c8a0 (address of ptr)
// 10
// 10