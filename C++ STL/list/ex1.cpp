#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;

    // Adding elements to the list
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    // Displaying the list
    cout << "Elements in the list: ";
    for (int val : l) {
        cout << val << " ";
    }
    cout << endl;

    // Removing an element from the list
    l.remove(20);

    // Displaying the list after removal
    cout << "Elements in the list after removal: ";
    for (int val : l) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}