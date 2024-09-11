#include <bits/stdc++.h>
using namespace std;
void answer () {
    int D, X, Y;
    cin >> D >> X >> Y;
    int count = 0;
    bool ispossible = false ;
    while (Y >= count) {
        float discount = X * (1 - (count * D) / 100.0);

        if (discount <= Y - count) {
            ispossible = true  ;
            cout << count << endl;
            break;
        }

        count++;
    }

    if (!ispossible) {
        cout << -1 << endl;
    }
}
int main() {
    int T;
    cin >> T;

    while (T--) {
        answer()  ;
    }
    return 0 ;
}
