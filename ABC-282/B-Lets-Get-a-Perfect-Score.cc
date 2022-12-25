#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
  int n, m, answer = 0;
  cin >> n >> m;
  string s[n];
  rep(i, n) cin >> s[i];
  rep(i, n) for (int j = i + 1; j < n; j++)
  {
    bool can = true;
    rep(k, m)
    {
      if (s[i][k] == 'x' && s[j][k] == 'x')
        can = false;
    }
    if (can)
      answer++;
  }
  cout << answer << endl;
  return 0;
}