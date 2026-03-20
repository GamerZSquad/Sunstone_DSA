#include <iostream>
#include <algorithm>
using namespace std;

void seclargest(int arr[] , int n){
    sort(arr, arr + n);
     for(int i = n ; i >= 0; i--){
        if(arr[i] != arr[n]){
            cout << arr[i];
            return;
        }
     }
}
int main() {
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i <n; i++){
        cin>>arr[i];
    }
    seclargest(arr , n);
    return 0;
}