#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
const ll INF = 1LL << 60;

int main()
{
  int n;
  ll a, b;
  string s;
  cin >> n >> a >> b >> s;
  vector<string> s_patterns(n);
  vector<int> yen_patterns(n);
  s_patterns[0] = s;

  rep(i, n - 1)
  {
    // string t =s, rotate(t.begin(), t.begin()+i, t.end()); を使用するとより楽
    s = s.substr(1, n - 1) + s[0];
    s_patterns[i + 1] = s;
  }

  int a_cnt = 0;
  ll yen = INF;
  for (auto &s_pattern : s_patterns)
  {
    int b_cnt = 0;
    for (int i = 0; i < n / 2; i++)
    {
      if (s_pattern[i] != s_pattern[n - 1 - i])
        b_cnt++;
    }
    yen = min(a * a_cnt + b * b_cnt, yen);
    a_cnt++;
  }

  cout << yen << endl;
  return 0;
}