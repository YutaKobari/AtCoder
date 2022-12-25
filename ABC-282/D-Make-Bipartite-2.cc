#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
vector<vector<int>> G;
// white: 0, black: 1, unvisited: -1
vector<int> colors;
pair<ll, ll> black_and_white;

int isBipartite(int v)
{
  for (auto next_v : G[v])
  {
    if (colors[next_v] == colors[v])
      return false;
    if (colors[next_v] != -1)
      continue;
    colors[next_v] = 1 - colors[v];
    colors[next_v] == 1 ? black_and_white.first++ : black_and_white.second++;
    // cout << "next_v: " << next_v << ", colors[next_v]: " << colors[next_v] << endl;
    if (!isBipartite(next_v))
      return false;
  }
  return true;
}

ll c2(ll n)
{
  return n * (n - 1) / 2;
}

int main()
{
  ll n, m, answer = 0, sides_combi_of_same_part = 0;
  cin >> n >> m;
  G.resize(n);
  rep(i, m)
  {
    int a, b;
    cin >> a >> b;
    a--, b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  colors.resize(n);
  for (auto &color : colors)
    color = -1;
  bool is_bipartite = true;
  rep(i, n)
  {
    if (colors[i] != -1)
      continue;
    colors[i] = 0;
    black_and_white = {0, 1};
    if (!isBipartite(i))
      is_bipartite = false;
    sides_combi_of_same_part += c2(black_and_white.first);
    sides_combi_of_same_part += c2(black_and_white.second);
  }
  if (is_bipartite)
    answer = c2(n) - sides_combi_of_same_part - m;
  cout << answer << endl;
}
