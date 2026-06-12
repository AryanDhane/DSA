#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {

        // Skip non-alphanumeric characters
        while (left < right && !isalnum(s[left])) {
            left++;
        }

        while (left < right && !isalnum(s[right])) {
            right--;
        }

        // Compare characters (case-insensitive)
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    if (isPalindrome(s)) {
        cout << "True - It is a palindrome." << endl;
    } else {
        cout << "False - It is not a palindrome." << endl;
    }

    return 0;
}