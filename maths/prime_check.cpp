#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // flag or monitor
    bool ans = false;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            ans=true;
            break;
        }
    }
    if (ans){
        cout<<"prime nhi hai";
    }
    else{
        cout <<"prime hai";
    }
    return 0;
}