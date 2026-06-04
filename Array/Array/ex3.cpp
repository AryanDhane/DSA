// find max and minimum element in array

#include <iostream>
using namespace std;
int main(){

    int nums[5] = {1,2,3,4,5};
    int size=5;

    int smallest  = nums[0];
    int largest = nums[0];

    for (int i=1; i<size; i++){
    smallest = min(smallest, nums[i]);
    largest = max(largest, nums[i]);
}
     cout << "Smallest element is: " << smallest << endl;
     cout << "Largest element is: " << largest << endl;
    return 0;
}


// output
// Smallest element is: 1
// Largest element is: 5