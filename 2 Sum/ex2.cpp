// find duplicate value



#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int findDuplicate(vector<int>& nums) {
    unordered_set<int> s;

    for (int val : nums) {
        if (s.find(val) != s.end()) {
            return val;
        }

        s.insert(val);
    }

    return -1;
}
int main () {

     vector<int> nums = {1, 3, 4, 2, 2};

    int duplicate = findDuplicate(nums);

    cout << "Duplicate Number: " << duplicate << endl;

    return 0;
}



// output :- Duplicate Number: 2