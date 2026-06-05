#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long x;  // IMPORTANT: long long for x
        cin >> x;
        
        if (x % 9 == 0) {
            cout << 10 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    
    return 0;
}