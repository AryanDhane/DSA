// pair sum problem 



#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7};

    int n = 7;

    int target = 13;

    for (int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
          if (arr[i] + arr[j] == target) {
            cout << "Pair found: " << arr[i] << " + " << arr[j] << " = " << target << endl;
          } 
        }
    }
    return 0;
}


// output:
// Pair found: 6 + 7 = 13