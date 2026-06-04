#include <iostream>
using namespace std;

int sumArr(int arr[], int size){
    int sum = 0;
    for (int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int main () {

    int arr[5] = {1,2,3,4,5};
    int size = 5;

    int result = sumArr(arr, size);
    cout << "The sum of the array is: " << result << endl;

    return 0;
}




// output:
// The sum of the array is: 15