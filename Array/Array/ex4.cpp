#include <iostream>
using namespace std;

void changeArr(int arr[], int size){
    for (int i=0; i<size; i++){
        arr[i] = arr[i] * 2;
    }
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int size = 5;

    changeArr(arr, size);
    for (int i=0; i<size; i++){
        cout << (arr[i]) << endl;
    }

    cout << endl;
    return 0;
}


// output

// 2
// 4
// 6
// 8
// 10
