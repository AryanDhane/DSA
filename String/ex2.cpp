#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void reverseString(vector<char>& s) {
      reverse(s.begin(), s.end());
    }

int main() {

    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s);

    cout << "Reversed string: ";
    for (char c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
} 