#include <bits/stdc++.h>
using namespace std  ;

void solve ()
{
	int x , y, k ;
	cin >> x >>  y  >> k   ;
	if (abs(x - y <= k ))
		cout << "YES" << endl ;
	else cout  << "NO" << endl  ;

}
int main ()
{
	solve () ;
	return 0 ;
}