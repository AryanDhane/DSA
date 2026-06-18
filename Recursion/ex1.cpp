// reverse number 

#include <iostream>
using namespace std;

void printNum(int n) {
    if( n == 1){
        cout << "1\n";
    }
    cout << n << " ";
    printNum(n-1);
}

int main () {
    printNum(100);
    return 0;
}