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
  vector<int> h(n);
  vector<ll> dp(n, INF);
  rep(i, n) cin >> h[i];
  dp[0] = 0;
  dp[1] = abs(h[1] - h[0]);
  rep(i, n - 2)
  {
    chmin(dp[i + 2], dp[i + 1] + abs(h[i + 2] - h[i + 1]));
    chmin(dp[i + 2], dp[i] + abs(h[i + 2] - h[i]));
  }
  cout << dp[n - 1] << endl;
  return 0;
}