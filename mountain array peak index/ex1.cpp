#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int st=0, end=arr.size()-1;

    while(st<end){
        int mid=st+(end-st)/2;

        if(arr[mid] < arr[mid+1]){
            st=mid+1;
        }
        else{
            end=mid;
        }
    }
    return st;
}
 
int main() { 

    int arr[] = {0,1,2,3,4,5,3,2,0};
    
    vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));
    cout << peakIndexInMountainArray(vec) << endl;
    return 0;
}