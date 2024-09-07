#include <bits/stdc++.h>
using namespace std  ;
void solve ()
{
	int N  , M  ;
	cin >> N >> M ;
	vector<int> A(N) ;
	vector<int> B(M) ;
	for  ( int i = 0 ; i < N ; i++)
	{
		cin  >> A[i]  ;
	}
	for  ( int i = 0 ; i < M ; i++)
	{
		cin  >> B[i]  ;
	}
	sort(A.begin() , A.end())  ;
	sort(B.begin() , B.end())  ;

	int i = 0 , j = 0  ;
	while (i < N && j < M )
	{
		if (A[i] == B[j]) {
			i++  ;
			j++  ;
		}
		else if (A[i] < B[j]) i++  ;
		else break  ;

	}
	if (j == M) cout  << "YES" << endl  ;
	else
		cout  << "NO" << endl   ;

}

int main  ()
{
	solve () ;
	return  0 ;
}