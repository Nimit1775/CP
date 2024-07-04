#include<bits/stdc++.h>
using namespace std  ;
int main  ()
{
	int  t ;
	cin  >>  t  ;
	while (t--)
	{
		long long mul = 1 ;
		int n  ;
		cin  >> n  ;
		for ( int i = 0 ; i < n ; i++)
		{
			int x  ;
			cin  >> x ;
			mul = mul * x  ;

		}
		int lsig = mul % 10  ;
		if (lsig == 2 || lsig == 3 || lsig == 5)
		{
			cout  <<  "YES\n";
		} else  {
			cout <<  "NO\n" ;
		}

	}
}