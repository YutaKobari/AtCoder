#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
  int n;
  string s, answer = "";
  cin >> n;
  cin >> s;

  rep(i, n)
  {
    if (s[i] == 'n' && s[i + 1] == 'a' && i != n - 1)
      answer += "nya", i++;
    else
      answer += s[i];
  }

  cout << answer << endl;
  return 0;
}