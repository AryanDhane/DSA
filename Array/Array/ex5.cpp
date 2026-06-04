#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
      for (int i=0; i<size; i++){
        if (arr[i] == target){
            return i;
        }
      }
        return -1;
}

int main() {

    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int target = 3;

    int result = linearSearch(arr, size, target);
    if (result != -1){  
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}



// Output:
// Element found at index: 2