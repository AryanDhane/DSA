// This program generates all possible subarrays of a given array and prints them.


#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7};
        
    int n = 7;

    for (int st=0; st<n; st++){
        for (int en=st; en<n; en++){
            for (int i=st; i<=en; i++){
                cout << arr[i] ;
            }
            cout << " ";
        }
            cout << endl;
    }
    return 0;

}


// output
// 1 12 123 1234 12345 123456 1234567 
// 2 23 234 2345 23456 234567 
// 3 34 345 3456 34567 
// 4 45 456 4567 
// 5 56 567 
// 6 67 
// 7 