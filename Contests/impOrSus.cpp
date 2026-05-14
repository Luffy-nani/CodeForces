#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        string r;
        cin >> r;
        int n = r.length();
        int ops = 0;
        
        if (r[0] == 'u') {
            r[0] = 's';
            ops++;
        }
        if (r[n-1] == 'u') {
            r[n-1] = 's';
            ops++;
        }
        
        for (int i = 1; i < n - 1; i++) {
            if (r[i] == 'u') {
                int left = -1, right = -1;
                
                for (int j = i - 1; j >= 0; j--) {
                    if (r[j] == 's') {
                        left = j;
                        break;
                    }
                }
                
                for (int j = i + 1; j < n; j++) {
                    if (r[j] == 's') {
                        right = j;
                        break;
                    }
                }
                
                int dL = i - left;
                int dR = right - i;
                
                if (dL != dR) {
                    if (dL < dR) r[i + dL] = 's';
                    else r[i - dR] = 's';
                    ops++;
                }
            }
        }
        
        cout << ops << "\n";
    }
    
    return 0;
}