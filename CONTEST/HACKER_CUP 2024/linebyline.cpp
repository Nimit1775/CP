#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int N;
        double P;
        cin >> N >> P;

        double P_prime = 100 * pow(P / 100.0, (N - 1.0) / N);

        double delta_P = P_prime - P;

        cout << "Case #" << t << ": " << fixed << setprecision(15) << delta_P << endl;
    }

    return 0;
}
