#include <iostream>
#include <vector>
using namespace std;
int n, m, answer = 0;
using Graph = vector<vector<int>>;
Graph G;
vector<bool> seen;

void dfs(int v)
{
  seen[v] = true;
  bool count_up = true;
  for (int i = 0; i < n; i++)
    if (seen[i] == false)
      count_up = false;
  if (count_up)
    answer++;
  for (auto nv : G[v])
  {
    if (seen[nv])
      continue;
    dfs(nv);
    seen[nv] = false;
  }
}

int main()
{
  cin >> n >> m;
  // グラフ入力受取
  G.resize(n);
  for (int i = 0; i < m; ++i)
  {
    int a, b;
    cin >> a >> b;
    a--, b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  // 探索
  int root = 0;
  seen.assign(n, false);
  dfs(root);
  // 結果
  cout << answer << endl;
}
