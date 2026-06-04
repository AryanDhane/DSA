#include <iostream>
#include <vector>
using namespace std;

 int main () {

int b = 10;
int *ptr = &b;

cout << ptr << endl; // address of b
ptr++;
cout << ptr << endl; // address of b + 4 (assuming int is 4 bytes)
ptr--;
cout << ptr << endl; // address of b again
ptr+=2;
cout << ptr << endl; // address of b + 8 (assuming int is 4 bytes)
ptr-=2;
cout << ptr << endl; // address of b again

    return 0;
 }