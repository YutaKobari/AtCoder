#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
const ll INF = 1LL << 60;
bool dp[2505][10100];
using Graph = vector<vector<int>>;
vector<bool> seen = {0};

int main()
{
  string s, t;
  cin >> s >> t;
  int s_size = s.size();
  int t_size = t.size();

  rep(i, t_size + 1)
  {
    string answer = "Yes";
    string first = s.substr(0, i);
    string last = s.substr(s_size - (t_size - i));
    string ans = first + last;
    for (int i = 0; i < ans.size(); i++)
    {
      if (ans[i] != '?' && t[i] != '?' && ans[i] != t[i])
        answer = "No";
    }
    cout << answer << endl;
  }
}