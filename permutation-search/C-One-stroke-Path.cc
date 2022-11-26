#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m, answer = 0;
using Graph = vector<vector<bool>>;
Graph G;

int main()
{
  cin >> n >> m;
  G.resize(n);
  for (auto &g : G)
    g.assign(n, false);
  for (int i = 0; i < m; ++i)
  {
    int a, b;
    cin >> a >> b;
    a--, b--;
    G[a][b] = G[b][a] = true;
  }
  vector<int> p(n);
  for (int i = 0; i < n; i++)
    p[i] = i;
  do
  {
    if (p[0] != 0)
      break;
    bool canMeet = true;
    for (int i = 0; i < n - 1; i++)
    {
      if (!G[p[i]][p[i + 1]])
      {
        canMeet = false;
        break;
      }
    }
    if (canMeet)
      answer++;
  } while (next_permutation(p.begin(), p.end()));
  cout << answer << endl;
}
