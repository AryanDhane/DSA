// Boyer-Moore Voting Algorithm
// to find the majority element in an array



#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int candidate = 0;
        int count = 0;

        for (int val : nums) {

            if (count == 0) {
                candidate = val;
            }

            if (val == candidate) {
                count++;
            } else {
                count--;
            }
        }

        return candidate;
    }
};

int main() {

    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    Solution s;

    cout << "Majority Element: "
         << s.majorityElement(nums)
         << endl;

    return 0;
}