#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello, World!";
    string str2 = "C++ Programming";

    // Concatenating strings
    string result = str1 + " " + str2;
    cout << "Concatenated String: " << result << endl;

    // Finding the length of a string
    cout << "Length of str1: " << str1.length() << endl;

    // Accessing individual characters
    cout << "First character of str1: " << str1[0] << endl;

    // Substring extraction
    string substring = str1.substr(7, 5);
    cout << "Substring of str1: " << substring << endl;

    string str3 = "hello, world!";
    // Comparing strings
    if (str1 == str3) {
        cout << "str1 and str3 are equal." << endl;
    } else {
        cout << "str1 and str3 are not equal." << endl;
    }
    
    return 0;
}
