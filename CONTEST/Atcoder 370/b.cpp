#include <bits/stdc++.h>
using namespace std;
void solve ()
{
    int N;
    cin >> N;

    vector<vector<int>> A(N + 1, vector<int>(N + 1));


    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= i; ++j) {
            cin >> A[i][j];
            if (i != j) {
                A[j][i] = A[i][j];
            }
        }
    }

    int current_element = 1;


    for (int i = 1; i <= N; ++i) {
        if (current_element >= i) {
            current_element = A[current_element][i];
        } else {
            current_element = A[i][current_element];
        }
    }


    cout << current_element << endl;
}
int main() {
    solve ()  ;
    return 0;
}
