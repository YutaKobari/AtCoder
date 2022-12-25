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
  string s, t;
  cin >> s >> t;
  vector<vector<int>> dp(s.size() + 1);
  for (auto &d : dp)
    d.resize(t.size() + 1, 0);

  rep(i, s.size()) rep(j, t.size())
  {
    if (s[i] == t[j])
    {
      dp[i + 1][j + 1] = dp[i][j] + 1;
      continue;
    }
    chmax(dp[i + 1][j + 1], dp[i][j + 1]);
    chmax(dp[i + 1][j + 1], dp[i + 1][j]);
  }

  // 復元
  string answer = "";
  int i = (int)s.size(), j = (int)t.size();
  while (i > 0 && j > 0)
  {
    // (i-1, j) -> (i, j) と更新されていた場合
    if (dp[i][j] == dp[i - 1][j])
      --i; // DP の遷移を遡る
    // (i, j-1) -> (i, j) と更新されていた場合
    else if (dp[i][j] == dp[i][j - 1])
      --j; // DP の遷移を遡る
    // (i-1, j-1) -> (i, j) と更新されていた場合
    else
    {
      answer = s[i - 1] + answer; // このとき s[i-1] == t[j-1] なので、t[j-1] + res でも OK
      --i, --j;                   // DP の遷移を遡る
    }
  }

  cout << answer << endl;
  return 0;
}