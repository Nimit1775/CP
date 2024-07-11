#include<bits/stdc++.h>
using  namespace std   ;
int   main  ()
{
	int t ;
	cin  >> t   ;
	while (t--)
	{
		int m, n  ;
		cin >> n >>  m ;
		string a ;
		cin >> a  ;
		unordered_map<char, int> count;
		for (char c = 'A'; c <= 'G'; ++c) {
			count[c] = 0;
		}


		for (char c : a) {
			count[c]++;
		}

		int additional_problems_needed = 0;


		for (char c = 'A'; c <= 'G'; ++c) {
			if (count[c] < m) {
				additional_problems_needed += (m - count[c]);
			}
		}

		cout << additional_problems_needed << endl;
	}

	return 0;

}

