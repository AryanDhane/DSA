// Search in roated sorted array


#include <iostream>
#include <vector>
using namespace std;

int rotatedsortedarray(vector<int> &A, int target){
    int st=0, end=A.size()-1;

    while(st<=end){
        cout<<"inside while loop :" <<st<<" "<<end<<endl;
        int mid=st+(end-st)/2;
        cout << "mid is : "<<mid<<endl;
        if(A[mid]==target){
            return mid;
        }
        if(A[st]<=A[mid]){
            if(A[st]<=target && target<A[mid]){
                cout << "after checking target is exict or not : " << "Target found in left half" << st << mid <<  endl;
                end = mid -1;
                cout << "Target found in left half" << end << endl;
            }else{
                cout << "after checking target is exict or not : " << "Target found in right half" << endl;
                st =mid+1;
                cout << "Target found in right half" << st << endl;
            }
        }else{
            if(A[mid]<=target && target<=A[end]){
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
    }
        return -1; // Target not found
    }


int main () {

    int A[] = {4,5,6,7,0,1,2};
    int target = 0;

    vector<int> vec(A, A + sizeof(A) / sizeof(A[0]));
    cout << rotatedsortedarray(vec, target) << endl;
    return 0;
}