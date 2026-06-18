#include <iostream>
#include <vector>
using namespace std;

 int subarraySum(vector<int>& nums, int k) {
int n =nums.size();
        int count = 0;

        for(int i=0; i<n; i++){
            int sum =0;
            for(int j=i; j<n; j++){
                sum += nums[j];
                    if(sum == k) count++;
            }
        }
    return count;
}

int main() {

    int k = 15;
    vector<int>nums = {1,3,5,7,9,11};

    cout << subarraySum << endl;

    return 0;
}