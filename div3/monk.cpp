#include<bits/stdc++.h>
using namespace std  ;

int minOperations(int n, int k, vector<int>& pieces) {
	// Handle edge cases:
	if (k == 1) {
		return 0; // Casserole is already whole
	} else if (pieces.size() == 2) {
		return pieces[0] == 1 ? 0 : 1; // Only merge needed if one piece is 1
	}

	// Sort the pieces in descending order for optimal merging
	sort(pieces.begin(), pieces.end(), greater<int>());

	int operations = 0;
	while (k > 1) {
		// Check if the first two pieces can be merged (if both are not 1)
		if (pieces[0] > 1 && pieces[1] > 1) {
			pieces[0]++; // Merge the first two pieces
			operations++;
		} else {
			// If merging isn't possible, split the largest piece (greedy approach)
			pieces[0] = pieces[0] - 1; // Split the largest piece
			pieces.push_back(1);       // Add the new piece of length 1
			operations++;
			k++;                        // Number of pieces increases
		}

		// Remove the last piece (of length 1) if it becomes the only remaining piece
		if (k > 2 && pieces[k - 1] == 1) {
			pieces.pop_back();
			k--;
		}
	}

	return operations;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;

		vector<int> pieces(k);
		for (int i = 0; i < k; i++) {
			cin >> pieces[i];
		}

		int operations = minOperations(n, k, pieces);
		cout << operations << endl;
	}

	return 0;
}