#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
  int h, w, count = 0;
  cin >> h >> w;
  vector<string> ss(h);
  rep(i, h)
  {
    cin >> ss[i];
    rep(j, w) if (ss[i][j] == '#') count++;
  }
  cout << count << endl;
  return 0;
}