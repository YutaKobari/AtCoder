#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;
// white: 0, black: 1, unvisited: -1
vector<int> colors;

bool dfs(const Graph &G, int v)
{
  for (auto nextV : G[v])
  {
    if (colors[nextV] == colors[v])
      return false;
    if (colors[nextV] != -1)
      continue;
    colors[nextV] = 1 - colors[v];
    return dfs(G, nextV);
  }
  return true;
}

int main()
{
  int n, m;
  cin >> n >> m;

  Graph G(n);
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    G[a - 1].push_back(b - 1);
    G[b - 1].push_back(a - 1);
  }

  colors.resize(n);
  for (auto &color : colors)
    color = -1;

  colors[0] = 0;
  string result = dfs(G, 0) ? "Yes" : "No";
  cout << result << endl;
}
