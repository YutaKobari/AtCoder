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
  int n;
  cin >> n;
  vector<vector<int>> a(n);
  rep(i, n)
  {
    a[i].resize(3);
    cin >> a[i][0] >> a[i][1] >> a[i][2];
  }
  vector<vector<int>> dp(n + 1);
  rep(i, n + 1)
  {
    dp[i].resize(3);
    dp[i] = {0, 0, 0};
  }
  rep(i, n)
      rep(j, 3)
  {
    chmax(dp[i + 1][j], dp[i][(j + 2) % 3] + a[i][j]);
    chmax(dp[i + 1][j], dp[i][(j + 1) % 3] + a[i][j]);
  }

  int answer = 0;
  rep(i, 3) chmax(answer, dp[n][i]);
  cout << answer << endl;
  return 0;
}