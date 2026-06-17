// find Missing and repeating value


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

     

    return 0 ;
}