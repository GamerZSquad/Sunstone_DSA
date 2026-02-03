#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        for (int sp = 1; sp <= n - i; sp++)
            cout << " ";
        
        if (i == 1) {
            cout << "1";
        } else {
            cout << i - 1;
            for (int sp = 1; sp <= 2 * i - 3; sp++)
                cout << " ";
            cout << i - 1;
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int sp = 1; sp <= n - i; sp++)
            cout << " ";
        
        if (i == 1) {
            cout << "1";
        } else {
            cout << i - 1;
            for (int sp = 1; sp <= 2 * i - 3; sp++)
                cout << " ";
            cout << i - 1;
        }
        cout << endl;
    }

    return 0;
}

