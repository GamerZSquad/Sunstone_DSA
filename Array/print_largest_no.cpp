#include <iostream>
using namespace std;

int main() {

    int n,arr_a[n];
    cout<<"enter the no. of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if (max<arr[i]){
            max=arr[i];
        }
    }
    cout<< max <<endl;
    return 0;
}