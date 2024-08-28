#include <bits/stdc++.h>
using namespace std ;

void solve ( )
{
	int K  ;
	cin >>  K ;
	int hours , mins  ;
	int start_min  = 0 ;
	int tol = start_min +  K ;
	hours  =  21 + (K / 60)  ;
	mins = tol % 60  ;
	cout << setw(2) << setfill('0') << hours << ":"
	     << setw(2) << setfill('0') << mins << endl;

}
int main ()
{
	solve()  ;
	return 0  ;
}