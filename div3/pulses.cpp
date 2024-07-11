#include<bits/stdc++.h>
using namespace std  ;
int maxProduct(int a, int b, int c, int increments) {
	vector<int> nums = {a, b, c};

	sort(nums.begin(), nums.end());
	for (int i = 0; i < increments; ++i) {
		nums[0]++;

		sort(nums.begin(), nums.end());
	}
	return nums[0] * nums[1] * nums[2];
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;
		cout << maxProduct(a, b, c, 5) << endl;
	}
	return 0;
}