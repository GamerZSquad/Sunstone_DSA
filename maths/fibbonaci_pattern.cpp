#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0, b = 1;

    for(int i = 1; i <= n; i++) {
        for(int sp = 1; sp <= i; sp++) {
            cout << a << " ";
            int fibbo = a + b;
            a = b;
            b = fibbo;
        }
        cout << endl;
    }

    return 0;
}