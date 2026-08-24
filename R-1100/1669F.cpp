#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> w(n);
    for(int i = 0; i < n; i++)
        cin >> w[i];

    int left = 0;
    int right = n - 1;

    long long leftSum = 0;
    long long rightSum = 0;
    long long ans = 0;

while(left <= right) {

    while(left <= right && leftSum < rightSum) {
        leftSum += w[left];
        left++;
    }

    while(left <= right && rightSum < leftSum) {
        rightSum += w[right];
        right--;
    }

    if(leftSum == rightSum) {
        ans = max(ans, (long long)left + n - 1 - right);

        if(left <= right) {
            leftSum += w[left];
            left++;
        }
    }
}

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}