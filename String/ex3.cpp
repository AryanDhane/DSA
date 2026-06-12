#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
    int st = 0;
    int end = s.length() - 1;

    while (st < end) {

        // Skip non-alphanumeric characters
        while (st < end && !isalnum(s[st])) {
            st++;
        }

        while (st < end && !isalnum(s[end])) {
            end--;
        }

        // Compare characters (case-insensitive)
        if (tolower(s[st]) != tolower(s[end])) {
            return false;
        }

        st++;
        end--;
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