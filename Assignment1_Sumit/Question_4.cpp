#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b) {
       cout << "A is maximum" << endl;
    }
    else if (a == b) {
        cout << "Both are equal" << endl;
    }
    else {
        cout << "B is maximum" << endl;
    }
    return 0;
}
