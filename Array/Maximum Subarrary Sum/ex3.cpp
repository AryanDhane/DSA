// using Kadane's Algorithm to find the maximum subarray sum in an array.
// Time Complexity: O(n) - due to a single loop through the array
// Space Complexity: O(1) - only a constant amount of extra space is used

#include <iostream>
#include <climits>

using namespace std;

int main() {

    int arr[] = {3,-4,5,4,-1,7,-8};

    int n = 7;

    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int i = 0; i < n; i++) {

        currentSum += arr[i];

        maxSum = max(maxSum, currentSum);

        if(currentSum < 0) {
            currentSum = 0;
        }
    }

    cout << "Maximum Subarray Sum = " << maxSum;

    return 0;
} 



// output
// Maximum Subarray Sum = 15    

