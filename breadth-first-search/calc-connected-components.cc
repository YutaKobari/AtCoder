#include <iostream>
#include <vector>
#include <queue>
using namespace std;
using Graph = vector<vector<int>>;
vector<bool> seen;

int main()
{
  int n, m;
  cin >> n >> m;
  seen.assign(n, false);
  queue<int> que;
  Graph G(n);
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (seen[i] == true)
      continue;
    seen[i] = true;
    que.push(i);

    while (!que.empty())
    {
      int v = que.front();
      que.pop();

      for (auto &nextV : G[v])
      {
        if (seen[nextV] == true)
          continue;
        seen[nextV] = true;
        que.push(nextV);
      }
    }
    count++;
  }

  cout << count << endl;
}
