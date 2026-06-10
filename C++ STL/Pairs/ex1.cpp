#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<pair<int, string>> p1; // Default constructor
    p1.push_back(make_pair(1, "Hello"));

    vector<pair<int, string>> p2 = {make_pair(2, "World")}; // Parameterized constructor

    cout << "Pair 1: " << p1[0].first << ", " << p1[0].second << endl;
    cout << "Pair 2: " << p2[0].first << ", " << p2[0].second << endl;

    return 0;
}