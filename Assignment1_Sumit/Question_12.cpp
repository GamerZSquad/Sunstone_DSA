#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter n:";
    cin >>num ;

    int digit = 0 , sum = 0;
      

    while (num > 0) {
        digit = num % 10;
        sum = sum + digit;
        num /= 10;
    }
    
    cout << "Sum is: " << sum << endl;
    
    return 0;
}
