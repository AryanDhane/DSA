#include <iostream>
#include <vector>
using namespace std;

 int singleNonDuplicate(vector<int>& nums) {

        int end = 0;
        int st = nums.size() - 1;

        while(end < st) {

            int mid = end + (st - end) / 2;
                cout << "mid: " << mid << endl;
            if(mid % 2 == 1)
            
                mid--;
                cout << "MID: " << mid << endl;
            if(nums[mid] == nums[mid + 1]) {
                end = mid + 2;
                cout << "end: " << end << endl;
            }
            else {
                st = mid;
                cout << "st: " << st << endl;
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