#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<pair<int, int>>>;
vector<int> colors;

void dfs(const Graph &G, int curV, int preV, int color)
{
  colors[curV] = color;
  for (auto &nextPair : G[curV])
  {
    if (nextPair.first == preV)
      continue;
    // cout << "first:" << nextPair.first << ", second:" << nextPair.second << endl;
    if (nextPair.second % 2 == 0)
      dfs(G, nextPair.first, curV, color);
    else
      dfs(G, nextPair.first, curV, 1 - color);
  }
}

int main()
{
  int n;
  cin >> n;

  Graph G(n);
  for (int i = 1; i < n; i++)
  {
    int u, v, w;
    cin >> u >> v >> w;
    G[u - 1].push_back({v - 1, w});
    G[v - 1].push_back({u - 1, w});
  }
  colors.resize(n);
  for (auto &color : colors)
    color = -1;

  dfs(G, 0, -1, 0);
  for (auto &color : colors)
  {
    cout << color << endl;
  }
}
