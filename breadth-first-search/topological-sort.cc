#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
using Graph = vector<vector<int>>;
vector<int> outdegrees;
vector<int> order;

int main()
{
  int n, m;
  cin >> n >> m;
  outdegrees.assign(n, 0);
  queue<int> que;
  Graph G(n);
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    G[b].push_back(a);
    outdegrees[a]++;
  }

  for (int i = 0; i < n; i++)
  {
    if (outdegrees[i] == 0)
      que.push(i);
  }

  while (!que.empty())
  {
    int v = que.front();
    que.pop();
    order.push_back(v);

    for (auto &nextV : G[v])
    {
      if (--outdegrees[nextV] == 0)
        que.push(nextV);
    }
  }

  reverse(order.begin(), order.end());
  for (auto &v : order)
  {
    cout << v << endl;
  }
}
