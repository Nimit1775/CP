#include<bits/stdc++.h>
using namespace std ;
void solve ()
{
	int n , count = 0 ;
	cin  >> n ;
	vector<int> a(n) ;

	for (int i = 0  ; i < n   ; i++)
	{
		cin  >> a[i]   ;
	}
	int max = a[0]  ;
	for (int i = 0  ; i < n ; i++)
	{
		if (a[i] > max)  max = a[i] ;
	}

	for ( int i = 0 ; i < n  ; i++)
	{
		while (a[i] != max)
		{
			a[i]++ ;
			count ++ ;
		}
	}
	cout << count  << endl ;


}
int main () {
	solve ()   ;
	return  0  ;
}