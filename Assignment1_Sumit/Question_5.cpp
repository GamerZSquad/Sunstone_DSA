#include <iostream>
using namespace std;

int main() {
    int a , b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << "A is maximum" << endl;
    } 
    else if (b >= c) {
        cout << "B is maximum" << endl;
    } 
    else {
        cout << "C is maximum" << endl;
    }
    return 0;
}
