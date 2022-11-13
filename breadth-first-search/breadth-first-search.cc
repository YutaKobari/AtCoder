#include <iostream>
#include <vector>
#include <queue>
using namespace std;
using Graph = vector<vector<int>>;
vector<int> depth;

int main()
{
  int n, m, start, dest;
  cin >> n >> m >> start >> dest;
  depth.assign(n, -1);
  queue<int> que;
  Graph G(n);
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
  }

  depth[start] = 0;
  que.push(start);
  while (!que.empty())
  {
    int v = que.front();
    que.pop();

    for (auto &nextV : G[v])
    {
      if (depth[nextV] != -1)
        continue;
      depth[nextV] = depth[v] + 1;
      que.push(nextV);
    }
  }

  if (depth[dest] != -1)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
