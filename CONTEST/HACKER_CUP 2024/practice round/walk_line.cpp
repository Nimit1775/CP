#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if it's possible to cross the bridge in K seconds
bool canCrossInKSeconds(int N, int K, vector<int>& times) {
    if (N == 1) {
        // If there's only one traveler, they just cross the bridge once
        return times[0] <= K;
    }

    sort(times.begin(), times.end());  // Sort the travelers by their crossing times

    int total_time = 0;
    int left = N;  // Number of travelers still on the starting side

    while (left > 3) {
        // Strategy 1: Send the two fastest, and return the fastest
        int option1 = 2 * times[1] + times[0] + times[left - 1];
        // Strategy 2: Send the two slowest and return the two fastest
        int option2 = 2 * times[0] + times[left - 1] + times[left - 2];

        // Choose the better of the two strategies
        total_time += min(option1, option2);
        left -= 2;  // Two travelers crossed

        // If the total time exceeds K, return false
        if (total_time > K) return false;
    }

    // Now we handle the base case for the last 2 or 3 travelers
    if (left == 3) {
        total_time += times[2] + times[1] + times[0];
    } else if (left == 2) {
        total_time += times[1];
    }

    // Return true if they all crossed within the allowed time, otherwise false
    return total_time <= K;
}

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        int N, K;
        cin >> N >> K;
        vector<int> S(N);

        for (int i = 0; i < N; ++i) {
            cin >> S[i];
        }

        bool result = canCrossInKSeconds(N, K, S);
        cout << "Case #" << t << ": " << (result ? "YES" : "NO") << endl;
    }

    return 0;
}
