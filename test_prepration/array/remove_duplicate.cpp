#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> remDupli(vector<int> arr) {
    set<int> s(arr.begin(), arr.end());  
    vector<int> result(s.begin(), s.end());
    return result;
}
int main() {
    vector<int> arr = {4, 2, 5, 2, 3, 4, 1};
    vector<int> result = remDupli(arr);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}