#include<iostream>
using namespace std;
int main(){
   
    int arr_b[]={1,2,3,4,5};// pehle se initialized hai aur baad me change bhi kar sakte hai
    int n;
    cin>>n;
    int arr_c[n]; //by default garbage hoga or baad me change bhi kar sakte hai
    // read 
    int s=sizeof(arr_b)/sizeof(int);
    for(int i=0;i<s;i++){
        cout<<arr_b[i]<<" ";
    }   
    cout<<endl;
    return 0;


}