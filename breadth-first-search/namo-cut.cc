// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2891
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
using Graph = vector<vector<int>>;
vector<int> outdegrees;
vector<bool> seen;
vector<pair<int, int>> questions;

int main()
{
  int n;
  cin >> n;
  queue<int> que;
  outdegrees.assign(n, 0);
  seen.assign(n, false);
  Graph G(n);
  for (int i = 0; i < n; i++)
  {
    int a, b;
    cin >> a >> b;
    a--, b--;
    G[a].push_back(b);
    G[b].push_back(a);
    outdegrees[a]++;
    outdegrees[b]++;
  }

  // insert leaves to the queue
  for (int i = 0; i < n; i++)
  {
    if (outdegrees[i] == 1)
      que.push(i);
  }

  while (!que.empty())
  {
    int v = que.front();
    que.pop();
    seen[v] = true;

    for (auto &nextV : G[v])
    {
      if (--outdegrees[nextV] == 1)
        que.push(nextV);
    }
  }

  int q;
  cin >> q;
  questions.resize(q);
  for (int i = 0; i < q; i++)
  {
    int a, b;
    cin >> a >> b;
    a--, b--;
    questions[i] = {a, b};
  }

  for (auto &question : questions)
  {
    int qa = question.first;
    int qb = question.second;
    if (!seen[qa] && !seen[qb])
      cout << 2 << endl;
    else
      cout << 1 << endl;
  }
}
