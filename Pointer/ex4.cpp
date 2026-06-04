// pass by reference

#include <iostream>
#include <vector>
using namespace std;

void changeA(int* ptr){
   *ptr = 20;
}

int main () {

int b = 10;
changeA(&b);
cout << b << endl;


    return 0;
}