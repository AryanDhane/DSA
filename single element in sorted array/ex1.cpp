#include <iostream>
    #include <vector>
using namespace std;

 int singleNonDuplicate(vector<int>& nums) {

        int end = 0;
        int st = nums.size() - 1;

        while(end < st) {

            int mid = end + (st - end) / 2;
                
            if(mid % 2 == 1)

                mid--;
            if(nums[mid] == nums[mid + 1]) {
                end = mid + 2;
            }            
            else {
                st = mid;
            } 
        }
        return nums[end];
    }

    int main() {
        vector<int> nums = {1,1,2,3,3,4,4,8,8};
        cout << singleNonDuplicate(nums) << endl;
        return 0;
    }




// output: 2
// Time complexity: O(log n)
// Space complexity: O(1)
