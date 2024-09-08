#include <bits/stdc++.h>
using namespace std;

void solve() {
    string S, T;
    cin >> S >> T;

    vector<string> X;
    int n = S.length();

    for (int i = 0; i < n; ++i) {////////
        if (S[i] != T[i]) {
            S[i] = T[i];
            X.push_back(S);
        }
    }


    cout << X.size() << endl;


    for (const string& str : X) {
        cout << str << endl;
    }
}

int main() {
    solve();
    return 0;
}
