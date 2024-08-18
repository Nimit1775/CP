#include <bits/stdc++.h>
using namespace std  ;
int nextbeut ( int y )
{
	while (true)
	{
		y++ ;
		unordered_set<int> digits;
		int num = y;
		while (num > 0) {
			digits.insert(num % 10);
			num /= 10;
		}
		if (digits.size() == 4) {
			return y;
		}
	}
}
void solve ()
{
	int y;
	cin >> y   ;
	cout << nextbeut(y) << endl ;
}
int main ()
{
	solve ()  ;
	return 0  ;
}