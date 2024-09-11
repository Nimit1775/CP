#include <bits/stdc++.h>
using namespace std;
void solve  ()
{
    int A1, A2, B1, B2, C1, C2;
    cin >> A1 >> A2 >> B1 >> B2 >> C1 >> C2;
    int best1 = max(A1, A2);
    int best2 = max(B1, B2);
    int best3 = max(C1, C2);
    int total = best1 + best2 + best3;
    cout << total << endl;
}
int main() {
    solve ()  ;
    return 0  ;
}
