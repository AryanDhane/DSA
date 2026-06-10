#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Adding elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    

    // Displaying the front element of the queue
    cout << "Front element: " << q.front() << endl;

    // Removing an element from the queue
    q.pop();

    // Displaying the front element after removal
    cout << "Front element after pop: " << q.front() << endl;

    return 0;
}
