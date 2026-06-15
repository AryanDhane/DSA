#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rev = 0;
    if (rev > INT_MAX / 10 || rev < INT_MIN / 10){
    return 0;
    }

    while (n != 0) {
        int digit = n % 10;      // Get the last digit
        rev = rev * 10 + digit;  // Add it to the reversed number
        n = n / 10;              // Remove the last digit
    }

    return rev;
}

int main() {
    int n = 12345;

    cout << "Original Number: " << n << endl;
    cout << "Reversed Number: " << reverseNumber(n) << endl;

    return 0;
}