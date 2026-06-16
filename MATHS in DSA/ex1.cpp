#include <iostream>
#include <vector>
using namespace std; 

    

bool isprime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n = 4;
    cout << isprime(n) << endl ;
     
    return 0;
}