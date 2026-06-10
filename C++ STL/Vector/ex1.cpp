#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.pop_back();
    for (int val : v) {
        cout << val << " ";
    }

    v.erase(v.begin() + 1);

    cout << "Elements in the vector: ";
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " " ;
    }
    cout << endl;
    cout << "Size:"<< v.size() << endl;
    cout << endl;
    
    return 0;
}
