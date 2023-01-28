#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
const ll INF = 1LL << 60;
bool dp[2505][10100];
using Graph = vector<vector<int>>;
vector<bool> seen = {0};

void dfs(const Graph &G, int v)
{
  seen[v] = true;

  for (auto nextV : G[v])
  {
    if (seen[nextV])
      continue;
    dfs(G, nextV);
  }
}

int main()
{
  int N, M, end_point_count = 0, middle_point_count = 0;
  cin >> N >> M;

  Graph G(N);
  rep(i, M)
  {
    int u, v;
    cin >> u >> v;
    u--, v--;
    G[u].push_back(v);
    G[v].push_back(u);
  }

  for (auto &degree : G)
  {
    if (degree.size() == 1)
      end_point_count++;
    if (degree.size() == 2)
      middle_point_count++;
  }

  seen.assign(N, false);
  int connected_count = 0;
  for (int i = 0; i < N; i++)
  {
    if (seen[i] == true)
      continue;
    dfs(G, i);
    connected_count++;
  }

  if (end_point_count == 2 && middle_point_count == N - 2 && connected_count == 1)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}