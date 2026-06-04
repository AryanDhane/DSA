// maximum subarray sum 


#include <iostream>
#include <climits>
using namespace std;

int main(){

    int arr[] = {3,-4,5,4,-1,7,-8};

    int n = 7;
    
    int currsum = 0;
    int maxsum = INT_MIN;

    for (int i=0 ; i<n; i++){
        int currsum =0;
        for (int j=i; j<n; j++){
            currsum += arr[j];
            maxsum = max(maxsum, currsum);
        }
    }
    cout << maxsum << endl;
    return 0;
}