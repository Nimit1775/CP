#include <bits/stdc++.h>
using namespace std  ;

int main  ()
{
	int t ;
	cin  >> t  ;
	while  (t--)
	{
		int x  , y , k ;
		cin >> x >> y >> k  ;
		int some , full ;
		if (x % k == 0) {
			some = x / k  ;
		}
		else
		{
			some = (x / k) + 1 ;
		}
		if (y % k == 0)
		{
			full = y / k  ;
		}
		else
		{
			full = (y / k) + 1 ;
		}
		int mini = min(some , full ) ;
		int maxi = max(some , full  ) ;
		int ans = mini + maxi + (maxi - mini) ;
		if (some > full )
		{
			ans-- ;
		}
		cout << ans  << endl ;

	}
	return 0 ;
}