#include<bits/stdc++.h>
using namespace std  ;
int main ()
{
	int t   ;
	cin  >> t   ;
	while  ( t--)
	{
		int  n  ;
		cin  >> n  ;
		int best_x = 2  ;
		int max_sum = 0    ;

		for (int x = 2; x <= n; ++x) {
			int k = n / x;
			int sum_of_multiples = x * (k * (k + 1)) / 2;

			if (sum_of_multiples > max_sum) {
				max_sum = sum_of_multiples;
				best_x = x;
			}
		}

		cout << best_x << endl;
	}
	return 0  ;
}