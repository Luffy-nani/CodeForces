#include <bits/stdc++.h>
#define ll long long
const int mod = 1e9 + 7;
using namespace std;

// Function to solve each test case
int solve() {
	ll n;
	cin >> n; // Read the size of the grid

	// Calculate the maximum number of Demodogs that can be killed
	// Formula derived from the problem statement
	ll ans = ((((n * (n + 1)) % mod) * (4 * n - 1)) % mod * 337) % mod;

	// Output the result for the current test case
	cout << ans << endl;
}

int main() {
	int t;
	cin >> t; // Read the number of test cases

	// Process each test case
	while (t--) {
		solve();
	}

	// Time Complexity (TC): O(t)
	// Space Complexity (SC): O(1)
}
