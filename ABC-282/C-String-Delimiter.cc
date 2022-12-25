#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
  int n;
  string s;
  cin >> n >> s;
  bool on = false;
  rep(i, n)
  {
    if (s[i] == ',' && !on)
      s[i] = '.';
    if (s[i] == '"')
      on = !on;
  }
  cout << s << endl;
  return 0;
}