#include<bits/stdc++.h>
using namespace std   ;
int main  ()
{
	int n ;
	cin  >>  n  ;
	bool ishard  = false   ;
	for ( int i = 0  ; i < n ; i++) {
		int op   ;
		cin  >>  op   ;
		if  ( op == 1) {
			ishard = true  ;
			break ;
		}
	}
	if (ishard) cout << "HARD"  ;
	else  cout << "EASY"   ;

	return  0  ;
}