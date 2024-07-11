#include <bits/stdc++.h>
using namespace std  ;
void solve() {
	int t;
	cin >> t;
	while (t--) {
		int n, m, k;
		cin >> n >> m >> k;

		vector<int> permutation(n);
		int index = 0;


		for (int i = k; i <= n; i++) {
			permutation[index++] = i;
		}


		for (int i = m + 1; i < k; i++) {
			permutation[index++] = i;
		}


		for (int i = 1; i <= m; i++) {
			permutation[index++] = i;
		}


		for (int i = 0; i < n; i++) {
			cout << permutation[i] << " ";
		}
		cout << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	solve();

	return 0;
}