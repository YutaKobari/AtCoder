#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
const ll INF = 1LL << 60;
template <class T>
inline void chmin(T &a, T b)
{
  if (a > b)
    a = b;
}
template <class T>
inline void chmax(T &a, T b)
{
  if (a < b)
    a = b;
}

int main()
{
  int n, w;
  cin >> n >> w;
  vector<int> weight(n), value(n);
  int value_max = n * 1001;
  rep(i, n) cin >> weight[i] >> value[i];
  vector<vector<ll>> dp(n + 1);
  rep(i, n + 1) dp[i].resize(value_max + 1, INF);
  dp[0][0] = 0;

  rep(i, n) rep(j, value_max)
  {
    dp[i + 1][j] = dp[i][j];
    if ((j - value[i]) >= 0)
      chmin(dp[i + 1][j], dp[i][j - value[i]] + weight[i]);
  }

  int answer = 0;
  rep(i, value_max)
  {
    if (dp[n][i] <= w)
      answer = i;
  }
  cout << answer << endl;
  return 0;
}