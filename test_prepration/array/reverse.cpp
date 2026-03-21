#include <vector>
#include <iostream>
using namespace std;

void reverse(vector<int>& arr, int n){
    int l=0;
    int r=n-1;
    while(l<r){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr , n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}