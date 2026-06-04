#include <iostream>
using namespace std;

void findUnique(int arr[], int size){

    for(int i=0; i<size; i++){

        int count = 0;

        for(int j=0; j<size; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i]<<" ";
        }
    }
}


int main() {
    int arr[7] = {1,2,3,2,4,5,1};
    int size = 7;

    cout << "Unique elements in the array are: ";
    findUnique(arr, size);
    cout << endl;

    return 0;
}

// output:
// Unique elements in the array are: 3 4 5  



