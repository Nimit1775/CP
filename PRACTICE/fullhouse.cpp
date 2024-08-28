#include<bits/stdc++.h>
using namespace std ;

void solve  ()
{
	int A , B, C , D , E  ;
	cin >> A >> B >> C >> D >> E  ;
	map < int , int> mpp ;
	mpp[A]++  ;
	mpp[B]++  ;
	mpp[C]++  ;
	mpp[D]++  ;
	mpp[E]++  ;

	bool three = false , two = false  ;
	for ( auto&c : mpp)
	{
		if (c.second == 3) three = true ;
		else if (c.second == 2 ) two = true  ;
	}
	if (three && two) cout << "YES" <<  endl;
	else cout << "NO" << endl;


}
int main  ()
{
	solve()  ;
	return 0 ;
}