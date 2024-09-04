#include <bits/stdc++.h>
using namespace std;
void solve ()
{
    int X, Y;
    cin >> X >> Y;

    if (X >= 2 * Y || Y >= 2 * X) {
        cout << 0 << endl;
    } else {
        int z = ( 2 * Y - X + 1  ) / 2;
        int m =  (2 * X - Y + 1 ) / 2 ;
        int res = min(z, m);
        cout << res << endl;
    }
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        solve () ;
    }
    return 0  ;
}
