#include<bits/stdc++.h>
using  namespace std  ;
solve()
{
	int n  ,  k;
	cin >> n >> k ;
	for ( int i = 1 ; i <= k  ; i++)
	{
		if (n % 10 != 0) n = n - 1  ;
		else n = n / 10 ;
	}
	cout  << n << endl  ;

}
int main ()
{
	solve()  ;
	return 0  ;
}