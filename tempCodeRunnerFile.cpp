#include<iostream>
using namespace std;
void countUp(int n) {
    if (n == 0) {       
        cout << 0;
        return;
    }
    countUp(n - 1);     
    cout << " " << n;   
}
int main() {
    int n;
    cin >> n;
    countUp(n);
    return 0;
}