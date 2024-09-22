#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canCrossInKSeconds(int N, int K, vector<int>& times) {
    if (N == 1) {
        return times[0] <= K;
    }

    sort(times.begin(), times.end());  // Sort times from fastest to slowest

    int total_time = 0;  // Total time taken to cross
    int left = N;  // Travelers remaining on the initial side

    // While more than 3 travelers remain, apply the strategies
    while (left > 3) {
        // Strategy 1: Two fastest cross, fastest returns, two slowest cross
        int option1 = times[1] + times[0] + times[left - 1] + times[1];
        // Strategy 2: Two slowest cross, fastest returns
        int option2 = times[left - 1] + times[left - 2] + 2 * times[0];

        total_time += min(option1, option2);
        left -= 2;

        if (total_time > K) return false;
    }

    // Handle cases for last 2 or 3 travelers
    if (left == 3) {
        total_time += times[2] + times[0] + times[1];  // Best way for 3 travelers
    } else if (left == 2) {
        total_time += times[1];  // Two travelers cross together
    }

    return total_time <= K;
}

int main() {
    int T;
    cin >> T;  // Number of test cases

    for (int t = 1; t <= T; ++t) {
        int N, K;
        cin >> N >> K;  // Number of travelers and max allowed time

        vector<int> S(N);
        for (int i = 0; i < N; ++i) {
            cin >> S[i];  // Time for each traveler to cross
        }

        bool result = canCrossInKSeconds(N, K, S);
        cout << "Case #" << t << ": " << (result ? "YES" : "NO") << endl;
    }

    return 0;
}
