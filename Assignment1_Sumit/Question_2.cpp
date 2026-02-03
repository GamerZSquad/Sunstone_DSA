#include <iostream>
using namespace std;

int main() {
    int P , T;
    float SI;
    float R;
    
    cout << "Enter Principal Amount: ";
    cin >> P;
    
    cout << "Enter Rate of Interest: ";
    cin >> R;
    
    cout << "Enter Time Period: ";
    cin >> T;
    
    SI = (P * R * T) / 100;
    
    cout << "Simple Interest:" << SI << endl;
    
    return 0;
}
