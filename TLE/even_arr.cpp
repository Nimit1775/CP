#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int odd_misplaced = 0, even_misplaced = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0 && a[i] % 2 != 0) {
                even_misplaced++;
            } else if (i % 2 != 0 && a[i] % 2 == 0) {
                odd_misplaced++;
            }
        }

        if (odd_misplaced == even_misplaced) {
            cout << odd_misplaced << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
