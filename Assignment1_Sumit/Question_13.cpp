#include <iostream>
using namespace std;

int main() {
    int num;
    int digit = 0;
    int rev = 0;
    
    cout << "Enter a number:";
    cin >> num;
    
    
    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    
    cout << "Reversed number: " << rev << endl;
    
    return 0;
}
