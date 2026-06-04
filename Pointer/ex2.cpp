#include <iostream>
#include <vector>
using namespace std;


int main() {
    int a = 10;
    int* ptr = &a; 
    int** ptr2 = &ptr;

        cout << *ptr << endl; 
        cout << **ptr2 << endl; 
        cout << ptr << endl; 
        cout << *ptr2 << endl;
    return 0;
}

// output:
// 10
// 10
// 0x7ffee3b8c8ac (address of a)
// 0x7ffee3b8c8ac (address of a)
