#include <iostream>
using namespace std;

int fibbo (int g){
    if (g==0 or g==1){
    return g;
    }
    return fibbo (g-1)+fibbo(g-2);
}
int main(){
    //input me apneko positon dena hai
    int n;
    cin>>n;
    cout <<fibbo(n)<<endl;
    return 0;
}