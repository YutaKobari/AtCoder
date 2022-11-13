#include <iostream>
#include <vector>
using namespace std;
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
  int n, m;
  cin >> n >> m;

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
    dfs(G, i);
    count++;
  }

  cout << count << endl;
}
