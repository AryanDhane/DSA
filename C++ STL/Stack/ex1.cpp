#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    // Adding elements to the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Displaying the top element of the stack
    cout << "Top element: " << s.top() << endl;

    // Removing an element from the stack
    s.pop();

    // Displaying the top element after removal
    cout << "Top element after pop: " << s.top() << endl;

    return 0;
}