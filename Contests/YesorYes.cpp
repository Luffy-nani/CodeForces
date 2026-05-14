#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        // Check if we can reduce to single character without combining two Y's
        bool canReduce = true;
        
        while (s.length() > 1) {
            bool found = false;
            
            // Try to find adjacent pair that doesn't result in Y OR Y = Y
            for (int i = 0; i < s.length() - 1; i++) {
                char a = s[i], b = s[i + 1];
                
                // Calculate OR result
                char result;
                if (a == 'Y' || b == 'Y') {
                    result = 'Y';
                } else {
                    result = 'N';
                }
                
                // Check if this combines two Y's
                if (a == 'Y' && b == 'Y') {
                    continue; // Skip this pair
                }
                
                // Apply operation
                s = s.substr(0, i) + result + s.substr(i + 2);
                found = true;
                break;
            }
            
            if (!found) {
                // No valid operation found, check if only Y's remain
                bool allY = true;
                for (char c : s) {
                    if (c != 'Y') {
                        allY = false;
                        break;
                    }
                }
                
                if (allY && s.length() > 1) {
                    canReduce = false;
                }
                break;
            }
        }
        
        if (canReduce && s.length() == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}