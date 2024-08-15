#include<bits/stdc++.h>
using namespace std  ;

void solve ()
{
	int x1 , x2 , x3  ;
	cin >> x1 >> x2  >> x3 ;
	int pos[3] = { x1 , x2 , x3}  ;
	sort(pos , pos + 3) ;

	int dist = (pos[1] - pos[0] ) + (pos[2] - pos[1]) ;
	cout << dist << endl ;

}
int main  ()
{
	solve() ;
	return 0  ;
}