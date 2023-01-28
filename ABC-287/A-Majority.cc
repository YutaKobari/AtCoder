#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
const ll INF = 1LL << 60;
bool dp[2505][10100];

int main()
{
  int n;
  cin >> n;
  vector<string> proponents;
  vector<string> opponents;
  rep(i, n)
  {
    string s;
    cin >> s;
    if (s == "For")
      proponents.push_back(s);
    else
      opponents.push_back(s);
  }

  if (proponents.size() > opponents.size())
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}