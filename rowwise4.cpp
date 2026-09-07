#include <bits/stdc++.h>
using namespace std;

pair<long, long> getfsMax(vector<vector<long>>& dp, int row, int C) {
    if (C == 1)
        return {dp[row][0], LONG_MIN};

    long fmax = max(dp[row][0], dp[row][1]);
    long smax = min(dp[row][0], dp[row][1]);

    for (int col = 2; col < C; col++) {
        if (dp[row][col] > fmax) {
            smax = fmax;
            fmax = dp[row][col];
        }
        else if (dp[row][col] > smax) {
            smax = dp[row][col];
        }
    }

    return {fmax, smax};
}

int main() {
    int R, C;
    cin >> R >> C;

    vector<vector<int>> grid(R, vector<int>(C));
    vector<vector<long>> dp(R, vector<long>(C));

    for (int row = 0; row < R; row++) {
        for (int col = 0; col < C; col++) {
            cin >> grid[row][col];

            if (row == 0)
                dp[row][col] = grid[row][col];
        }
    }

    for (int row = 1; row < R; row++) {
        auto fsmax = getfsMax(dp, row - 1, C);

        for (int col = 0; col < C; col++) {
            dp[row][col] =
                grid[row][col] +
                (dp[row - 1][col] == fsmax.first
                     ? fsmax.second
                     : fsmax.first);
        }
    }

    cout << getfsMax(dp, R - 1, C).first << endl;

    return 0;
}
