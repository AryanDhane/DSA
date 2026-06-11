#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;

    // Adding key-value pairs to the map
    m["apple"] = 1;
    m["banana"] = 2;
    m["orange"] = 3;

    // Displaying the value associated with a key
    cout << "Value for 'apple': " << m["apple"] << endl;

    // Removing a key-value pair from the map
    m.erase("banana");

    // Displaying the value associated with a key after removal
    cout << "Value for 'banana' after removal: " << m["banana"] << endl;

    return 0;
}