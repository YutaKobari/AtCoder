#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
const ll INF = 1LL << 60;

const int MOD = 998244353;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];

    vector<vector<int>> dp(n, vector<int>(2, 0));
    dp[0][0] = 1;
    dp[0][1] = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
            dp[i][0] += dp[i - 1][0];
        if (a[i] != b[i - 1])
            dp[i][0] += dp[i - 1][1];
        dp[i][0] %= MOD;

        if (b[i] != a[i - 1])
            dp[i][1] += dp[i - 1][0];
        if (b[i] != b[i - 1])
            dp[i][1] += dp[i - 1][1];
        dp[i][1] %= MOD;
    }

    int answer = (dp[n - 1][0] + dp[n - 1][1]) % MOD;
    cout << answer;
    return 0;
}