#include <bits/stdc++.h>
using namespace std;
void solve ()
{
    int N ,  K  ;
    cin  >> N  >>  K ;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    while (K > 0)
    {
        int X = A[0];
        int Y = A.back();
        A.erase(A.begin());
        A.pop_back();

        int sum = X + Y;

        auto it = lower_bound(A.begin(), A.end(), sum);
        A.insert(it, sum);

        K-- ;
    }
    for  ( int i = 0 ; i < A.size() ; i++)
    {
        cout  << A[i] << " " ;
    }
    cout << endl  ;
}
int main() {
    int T  ;
    cin  >> T  ;
    while  (T--)
    {
        solve() ;
    }
    return  0  ;

}