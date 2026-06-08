#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int>& arr, int n, int m, int mid) {
    int painters = 1;
    int time = 0;

    for (int i = 0; i < n; i++){
        if (arr[i] > mid){
            time += arr[i];
        }else{
            painters++;
            time = arr[i];
        }
    } 
    return painters <= m  ;  
}

int minTimeToPaint(vector<int>& arr, int n, int m) {
    if (m > n) return -1;

    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    int ans = -1;
    int end = sum;
    int start = 0;

    while (start <= end){
        int mid = start + (end - start) / 2;

        if (isPossible(arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return ans;
}


int main(){
    vector<int> arr = {10, 20, 30, 40};
    int m = 2;
    int n = 4;
    cout << minTimeToPaint(arr, n, m) << endl;       
    return 0;

}