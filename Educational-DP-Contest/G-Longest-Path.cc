// DPというよりは、メモ化再起
// トポロジカルソートをDFSで解く解法
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
const ll INF = 1LL << 60;
template <class T>
inline void chmin(T &a, T b)
{
  if (a > b)
    a = b;
}
template <class T>
inline void chmax(T &a, T b)
{
  if (a < b)
    a = b;
}
vector<vector<int>> G;
vector<int> dp;

int rec(int v)
{
  if (dp[v] != -1)
    return dp[v];

  int index = 0;
  for (auto nv : G[v])
    chmax(index, rec(nv) + 1);
  return dp[v] = index;
}

int main()
{
  int N, M;
  cin >> N >> M;
  dp.assign(N, -1);
  G.resize(N);
  rep(i, M)
  {
    int x, y;
    cin >> x >> y;
    --x, --y;
    G[x].push_back(y);
  }

  int answer = 0;
  rep(v, N) chmax(answer, rec(v));
  cout << answer << endl;
}
