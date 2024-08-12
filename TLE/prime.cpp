#include <bits/stdc++.h>
using namespace std  ;
int main  ()  {
	int n  ;
	cin  >> n   ;
	if  ( n <= 1)  cout  << "NO" ;
	if (n % 1 == 0 && n % n == 0)
	{
		cout << "YES"   ;

	}
	else  cout  <<  "NO"    ;
	return  0  ;
}