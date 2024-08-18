#include<bits/stdc++.h>
using namespace std  ;


int nearest_water_station(int N) {
	int quotient = N / 5;
	int remainder = N % 5;
	return remainder <= 2.5 ? quotient * 5 : (quotient + 1) * 5;
}
void solve()
{
	int N  ;
	cin >> N  ;
	int station = nearest_water_station(N);
	cout  << station  << endl ;
}
int main ()
{
	solve() ;
	return 0  ;
}