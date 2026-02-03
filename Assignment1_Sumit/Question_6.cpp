#include <iostream>
using namespace std;

int main() {
    int m;
    
    cout << "Enter marks:";
    cin >> m;
    
    if (m >= 90) {
        cout << "Grade A" << endl;
    } 
    else if (m >= 80 && m < 90) {
        cout << "Grade B" << endl;
    } 
    else if (m >= 70 && m < 80) {
        cout << "Grade C" << endl;
    } 
    else if (m >= 60 && m < 70) {
        cout << "Grade D" << endl;
    }
     else {
        cout << "Fail" << endl;
    }
    
    return 0;
}
