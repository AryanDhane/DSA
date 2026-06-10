#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d;

    // Adding elements to the front and back of the deque
    d.push_back(10);
    d.push_back(20);
    d.push_front(5);
    d.push_front(1);

    // Displaying the deque
    cout << "Elements in the deque: ";
    for (int val : d) {
        cout << val << " ";
    }
    cout << endl;

    // Removing elements from the front and back of the deque
    d.pop_back();
    d.pop_front();

    // Displaying the deque after removal
    cout << "Elements in the deque after removal: ";
    for (int val : d) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}