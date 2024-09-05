#include<bits/stdc++.h>
using namespace std  ;
void solve  ()
{
	int n  , k ;
	cin >> n  >> k  ;
	vector<int> A(n) ;
	for  ( int i  = 0 ; i < n ; i++)
	{
		cin >> A[i]  ;
	}

	for  ( int i = 0 ; i < n ; i++)
	{

		if (A[i] <= k )
		{
			cout  << 1  ;
			k -= A[i] ;
		}
		else cout << 0  ;
	}
	cout << endl  ;
}
int main  ()
{
	int t  ;
	cin >> t ;
	while (t--)
	{
		solve()  ;
	}
	return 0 ;
}