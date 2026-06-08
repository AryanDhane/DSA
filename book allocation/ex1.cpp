#include <iostream> 
#include <vector>
using namespace std;

bool invalid(vector<int>& arr, int n,int m, int mid) {
    int students = 1;
    int pages = 0;

    for(int i = 0 ; i < n; i++){
       if(arr [i] > mid){
        pages += arr[i];
       }else{
        students++;
        pages = arr[i];
       } 
    }
    return students > m ? true : false;
}

int allocateBooks(vector<int>& arr, int n, int m) {
    if (m > n) return -1;

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int ans = -1;
    int end =sum;
    int start = 0;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(invalid(arr, n, m, mid)){
            start = mid + 1;
        }else{
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {15, 17, 20};
    int m = 2;
    int n = 4;
    cout << allocateBooks(arr, n, m) << endl;       
    return 0;

} 