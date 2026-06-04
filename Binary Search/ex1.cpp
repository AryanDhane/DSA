#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int>& nums, int target){
    int st=0, end=nums.size()-1;

    while(st<=end){
        int mid=st+(end-st)/2;

        if(target > nums[mid]){
            st=mid+1;
        }
        else if(target < nums[mid]){
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1; // Target not found
}

int main() { 

    int nums[] = {-1,0,3,5,9,12};
    int target = 9;
    
    vector<int> vec(nums, nums + sizeof(nums) / sizeof(nums[0]));
    cout << binarysearch(vec, target) << endl;


    return 0;
}