#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
  int N, K, D;
  cin >> N >> K >> D;
  vector<int> a(N);
  rep(i, N) cin >> a[i];

  // 二次元配列
  vector<vector<bool>> dp(N + 1, vector<bool>(N + 1, false));
  // 初期化
  for (int i = 0; i <= N; i++)
  {
    dp[i][0] = true;
  }
  // 更新
  rep(i, N)
  {
    rep(k, N)
    {
      if (k - a[i] >= 0)
        dp[i + 1][k] = dp[i + 1][k] | dp[i][k - a[i]];
      dp[i + 1][k] = dp[i + 1][k] | dp[i][k];
    }
  }
  if (dp[N][K])
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}