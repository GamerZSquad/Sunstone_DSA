#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val;
    cout <<"enter the value to be found: ";
    cin>>val;
    for(int i=0;i<n;i++){
        if (arr[i]==val){
            cout<<i+1<<endl;
        }
    }
    return 0;
}