#include<bits/stdc++.h>
using namespace std  ;
int  main  ()
{

	int t  ;
	cin   >> t   ;
	while (t--) {
		int n  ;
		cin  >> n  ;
		string s  ;
		cin  >> s  ;
		long long result = 0 ;
		long long power = 1 ;
		for  ( int i = s.size() - 1 ; i >= 0 ; --i)
		{
			int bin_digit    = s[i] - '0' ;
			result = result + (bin_digit * power ) ;
			power = power * 2  ;
		}
		cout  << result << endl  ;
	}

}