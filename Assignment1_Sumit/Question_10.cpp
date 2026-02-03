#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }

    return 0;
}
