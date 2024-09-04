#include <bits/stdc++.h>
using namespace std ;
void solve ()
{
	int a , b  , c ;
	cin >> a >> b  >> c ;
	double avg = (a + b) / 2.0 ;
	if (avg > c) cout << "YES" << endl   ;
	else cout << "NO" << endl  ;

}
int main ()
{
	int t ;
	cin  >> t  ;
	while (t--)
	{
		solve()  ;
	}
	return 0  ;
}