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
  rep(i, n) cin >> weight[i] >> value[i];
  vector<vector<ll>> dp(n + 1);
  rep(i, n + 1) dp[i].resize(w + 1, 0);

  rep(i, n) rep(j, w + 1)
  {
    dp[i + 1][j] = dp[i][j];
    if ((j - weight[i]) >= 0)
      chmax(dp[i + 1][j], dp[i][j - weight[i]] + value[i]);
  }

  cout << dp[n][w] << endl;
  return 0;
}