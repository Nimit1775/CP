
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin  >> n   ;
    if (n == 1) {
        cout  << 0 << endl ;
        return 0  ;
    }
    if  (n == 2)  {
        cout  <<  1  << endl   ;
        return 0   ;
    }
    long long prev = 0 ;
    long long prev2 = 1  ;
    long long current ;
    for ( int i = 3 ; i <= n ; i++)
    {
        current = prev + prev2  ;
        prev = prev2   ;
        prev2 = current ;
    }
    cout << current  << endl  ;
    return 0;
}