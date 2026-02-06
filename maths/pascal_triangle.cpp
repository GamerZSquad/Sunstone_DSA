#include <iostream>
using namespace std;

// formula for this 
// val = val * (i-j)/j+i
int main() {
int n;
cin>>n;
for (int i=0;i<n;i++){
    int val=1;
    for (int j=0;j<=i;j++){
        cout<<val<<" ";
        val =val *(i-j)/(j+1);
    }
    cout <<endl;
}
    return 0;
}