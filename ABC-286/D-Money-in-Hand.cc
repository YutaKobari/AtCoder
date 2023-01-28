#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
const ll INF = 1LL << 60;
bool dp[2505][10100];

int main()
{
  int n, x;
  cin >> n >> x;
  vector<int> c;
  rep(i, n)
  {
    int a, b;
    cin >> a >> b;
    rep(i, b) c.push_back(a);
  }
  int m = c.size();
  dp[0][0] = true;

  rep(i, m) rep(j, x + 1)
  {
    if (!dp[i][j])
      continue;
    dp[i + 1][j] = true;
    dp[i + 1][j + c[i]] = true;
  }

  if (dp[m][x])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
