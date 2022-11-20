// https://paiza.jp/works/mondai/bfs_dfs_problems/bfs_dfs_problems__bipartite_graph?language_uid=python2
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
using Graph = vector<vector<int>>;
// white: 0, black: 1, unvisited: -1
vector<int> colors;

int main()
{
  int n, m;
  cin >> n >> m;
  colors.assign(n, -1);
  queue<int> que;
  Graph G(n);
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    a--, b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  for (int i = 0; i < n; i++)
  {
    if (colors[i] != -1)
      continue;
    colors[i] = 0;
    que.push(i);
    while (!que.empty())
    {
      int v = que.front();
      que.pop();

      for (auto &nextV : G[v])
      {
        if (colors[v] == colors[nextV])
        {
          cout << "No" << endl;
          return 0;
        }
        if (colors[nextV] == 1 - colors[v])
          continue;
        colors[nextV] = 1 - colors[v];
        que.push(nextV);
      }
    }
  }

  cout << "Yes" << endl;
  return 0;
}
