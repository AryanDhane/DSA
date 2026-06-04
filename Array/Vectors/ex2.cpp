#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums);

int main(){
    vector<int> nums = {2, 2, 1};
    cout << singleNumber(nums) << endl;
    return 0;
}
int singleNumber(vector<int>& nums){
    int ans = 0;
    for (int val : nums){
        ans ^= val;
    }

    return ans;
}


