#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int sortarr(vector<int>& arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];  // largest element
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);  // initialize size properly

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int largest = sortarr(arr);
    cout << "Largest element: " << largest;
    return 0;
}