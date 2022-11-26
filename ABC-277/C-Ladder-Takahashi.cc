#include <iostream>
#include <vector>
#include <map>
using namespace std;
using Graph = map<int, vector<int>>;
map<int, bool> seen;
int maxFloor = 1;

void dfs(Graph &G, int v)
{
  if (maxFloor < v + 1)
    maxFloor = v + 1;
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
  int n;
  cin >> n;

  Graph G;
  for (int i = 0; i < n; i++)
  {
    int a, b;
    cin >> a >> b;
    a--, b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  dfs(G, 0);

  cout << maxFloor << endl;
  return 0;
}
