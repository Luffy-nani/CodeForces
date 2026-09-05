#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int first1 = n;
    int firstm = n;

    for(int i = 0; i < n; i++) {
        if(a[i] == 1) {
            first1 = i;
            break;
        }
    }

    for(int i = 0; i < n; i++) {
        if(a[i] == -1) {
            firstm = i;
            break;
        }
    }

    int l = min(first1, firstm);

    // Everything is 0
    if(l == n) {
        for(int i = 0; i < n; i++)
            cout << 0 << " ";
        cout << '\n';
        return;
    }

    int best = 1;
    int best_l = l;
    int best_r = l;

    for(int r = l + 1; r < n; r++) {

        if(a[r] == -1) {

            // Temporarily make this -1 into 1
            if(r - l + 1 > best) {
                best = r - l + 1;
                best_l = l;
                best_r = r;
            }

            // Continue considering this -1 as 0
        }

        else if(a[r] == 1) {

            // This can be the right endpoint
            if(r - l + 1 > best) {
                best = r - l + 1;
                best_l = l;
                best_r = r;
            }

            // This 1 becomes the new left endpoint
            l = r;
        }
    }

    // Replace all -1 by 0
    for(int i = 0; i < n; i++) {
        if(a[i] == -1)
            a[i] = 0;
    }

    // Make the chosen endpoints 1
    a[best_l] = 1;
    a[best_r] = 1;

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}