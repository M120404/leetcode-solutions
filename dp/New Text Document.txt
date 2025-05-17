#include <iostream>
#include <vector>
using namespace std;

// Cute DP function to count ways frog can reach the top
int countWays(int n) {
    if (n == 0 || n == 1) return 1;

    vector<int> dp(n + 1, 0);
    dp[0] = dp[1] = 1;

    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main() {
    int steps;
    cout << "🐸 Enter number of steps for the frog: ";
    cin >> steps;

    cout << "💡 The frog can reach the top in " << countWays(steps) << " ways!" << endl;
    return 0;
}
