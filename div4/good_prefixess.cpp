#include<bits/stdc++.h>
using namespace std ;
int main  ()
{
	int t  ;
	cin  >> t    ;
	while  ( t--)
	{
		long long  n   ;
		cin >>  n  ;
		vector<long long > a(n);
		for  ( int i = 0 ; i < n ; i++)
			cin  >> a[i] ;

		long long prefixmax = -1 ;
		long long  prefixsum = 0  ;
		long long ans = 0    ;
		for ( int i = 0 ; i < n   ; i++)
		{
			prefixmax = max(prefixmax , a[i]) ;
			prefixsum += a[i]  ;
			if (prefixsum - prefixmax ==  prefixmax  )
				ans ++ ;

		}
		cout  << ans << endl  ;

	}
	return 0   ;
}
#include <bits/stdc++.h>
using namespace std;

