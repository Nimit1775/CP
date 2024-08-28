#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is composite
bool isComposite(int x) {
    if (x < 4) return false;  // Numbers less than 4 are not composite
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return true;
        }
    }
    return false;
}

void solve() {
    int n;
    cin >> n;

    // Start with a known composite and find the pair
    for (int b = 4; b <= 1000000; b++) { // Loop to find composite b
        int a = b + n; // Calculate a such that a - b = n
        if (isComposite(a) && isComposite(b)) { // Check if both a and b are composite
            cout << a << " " << b << endl; // Print the pair
            return;
        }
    }
}

int main() {
    solve();
    return 0;
}
