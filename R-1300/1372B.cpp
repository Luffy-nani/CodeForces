#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; // Number of test cases
	cin >> t;
	while (t--) {
		int n; // The integer n for which we need to find a and b
		cin >> n;
		int f = 0; // Flag to check if a divisor is found
		// Loop to find the smallest divisor of n starting from 2
		for (int i = 2; i * i <= n; i++) { // O(sqrt(n))
			if (n % i == 0) { // Check if i is a divisor of n
				int k = n / i; // Calculate the corresponding pair value
				cout << k << " " << n - k << endl; // Output the pair (k, n-k)
				f = 1; // Set flag to indicate a divisor was found
				break; // Exit the loop as we found the required pair
			}
		}
		// If no divisor was found, output (1, n-1)
		if (f == 0) {
			cout << 1 << " " << n - 1 << endl;
		}
	}
}

// Time Complexity (TC): O(t*sqrt(n))
// Space Complexity (SC): O(1)
