#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                bool left = (i == 0 || s[i-1] == '0');
                bool right = (i == n-1 || s[i+1] == '0');
                
                if (left && right) {
                    s[i] = '1';
                }
            }
        }
        
        int total = count(s.begin(), s.end(), '1');
        cout << total << "\n";
    }
    
    return 0;
}