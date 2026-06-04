#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    cout << "Vector elements: ";
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " " ;
    }  

     cout << vec.size() << endl;

    return 0;
}
    

// Output:
// Vector elements: 10 20 30
// Vector size: 3