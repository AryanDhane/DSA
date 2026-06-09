#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }

}
    int sortedArray(int arr[], int n){
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }

    int main() {
        int arr[] = {12, 11, 13, 5, 6};
        int n = sizeof(arr) / sizeof(arr[0]);
        bubbleSort(arr, n);
        cout << "Sorted array: \n";
        sortedArray(arr, n);
        return 0;
    }



    // output : Sorted array:
    // 5 6 11 12 13