#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
const ll INF = 1LL << 60;
bool dp[2505][10100];

int main()
{
  int n, m, count = 0;
  cin >> n >> m;
  vector<string> s(n);
  vector<string> t(m);
  rep(i, n) cin >> s[i];
  rep(i, m) cin >> t[i];

  for (auto &six_chars : s)
  {
    string last_three_chars = six_chars.substr(3);
    for (auto &three_chars : t)
    {
      if (last_three_chars == three_chars)
      {
        count++;
        break;
      }
    }
  }

  cout << count << endl;
}