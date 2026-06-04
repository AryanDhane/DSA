// call by value


#include <iostream>
#include <vector>
using namespace std;

void changeA(int a){
    a = 20;
}

int main () {

int b = 10;
changeA(b);
cout << b << endl;


    return 0;
}