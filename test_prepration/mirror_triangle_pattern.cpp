#include <iostream>
using namespace std;

int main() {
int j;
    int n=4;
    for (int i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
        cout<<"  ";
    }
    for(int sp=1;sp<=i;sp++){
        cout <<"* ";
    }
    cout<<endl;
    }
    return 0;
}