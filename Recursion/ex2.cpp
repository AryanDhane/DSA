#include <iostream>
using namespace std;

int sumOfNums(int n) {
    if( n == 1){
       return 1;
    }
   
   return n + sumOfNums(n-1);
}

int main () {
   sumOfNums(100);
    return 0;
}