#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& arr, int target) {
    unordered_map<int, int> mp;
    vector<int> ans;

    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int first = arr[i];
        int sec = target - first;

        if (mp.find(sec) != mp.end()) {
            ans.push_back(i);
            ans.push_back(mp[sec]);
            break;
        }

        mp[first] = i;
    }

    return ans;
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = twoSum(arr, target);

    cout << "Indices: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}