#include<bits/stdc++.h>
#include<iostream>
#include <set>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);  
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << arr[n/2];
    return 0;
}