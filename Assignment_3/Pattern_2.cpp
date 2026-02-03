#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {

        for(int sp = 1; sp <= n - i; sp++)
            cout << "  ";

        for(int j = 0; j < i; j++)
            cout << i + j << " ";

        for(int j = i - 2; j >= 0; j--)
            cout << i + j << " ";

        cout << endl;
    }
    return 0;
}