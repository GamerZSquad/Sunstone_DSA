#include <iostream>
using namespace std;

int main() {
int j;
    int n=4;
    for (int i=1;i<=n;i++){
        for(j=1;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;

    }
    for (int k=n;k<=1;k++){
        for (int l=1;l<=n;l++){
            cout<<"* ";
        }
        cout <<endl;
    }
    return 0;
}