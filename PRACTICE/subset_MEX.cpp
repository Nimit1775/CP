#include<bits/stdc++.h>
using namespace std  ;
void solve ()
{
	int  n   ;
	cin  >> n  ;
	vector<int> a[n]  ;
	for  ( int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	set<int> b(a.begin() , a.end()) ;
	int result =  0 ;
	while (b.count(result))
		++result;

	cout << result << endl ;
}
int main  ()
{
	int t  ;
	cin  >> t  ;
	while (t--)
	{
		solve()  ;
	}
	return  0  ;
}