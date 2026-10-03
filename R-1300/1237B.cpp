#include <bits/stdc++.h>
using namespace std;

int main() {
	// Read number of elements in the arrays
	int n;
	cin >> n;

	// Declare and initialize two integer vectors of size n
	vector<int> a(n, 0), b(n, 0); // a: original array, b: shuffled array

	// Map to store value-to-index mapping for array a
	map<int, int> mp;

	// Input elements of array a and map each value to its index
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mp[a[i]] = i;
	}

	// Vector to store the new positions of elements from b in a
	vector<int> c(n, 0);

	// Input array b, and fill c with the index of b[i] as it appears in a
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		c[mp[b[i]]] = i; // Find index of b[i] in a, and store its position in c
	}

	// Traverse c and count how many elements are out of order
	int mx = c[0]; // Keeps track of the max index seen so far
	int ans = 0;

	for (int i = 1; i < n; i++) {
		if (c[i] < mx) {
			// If current element comes before the maximum seen so far,
			// it means this element was overtaken → count as disorder
			ans++;
		}
		// Update max index seen so far
		mx = max(mx, c[i]);
	}

	// Output the total number of out-of-order elements
	cout << ans << endl;

	return 0;
}

// Time Complexity (TC): O(nlogn)
// Space Complexity (SC): O(n)
