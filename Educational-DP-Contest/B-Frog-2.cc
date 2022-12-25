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
  int n, k;
  cin >> n >> k;
  vector<int> h(n);
  vector<ll> dp(n, INF);
  rep(i, n) cin >> h[i];
  dp[0] = 0;
  rep(i, n) for (int j = i - 1; i - j <= k && j >= 0; j--)
      chmin(dp[i], dp[j] + abs(h[i] - h[j]));
  cout << dp[n - 1] << endl;
  return 0;
}