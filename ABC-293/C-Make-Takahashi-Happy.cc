#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

const int MAX_H = 10;
const int MAX_W = 10;
int H, W;
vector<vector<int>> a(MAX_H, vector<int>(MAX_W));
set<int> visited;

int dfs(int i, int j)
{
    visited.insert(a[i][j]);

    if (i == H - 1 && j == W - 1)
    {
        int res = 1;
        visited.erase(a[i][j]);
        return res;
    }

    int res = 0;
    if (i < H - 1 && visited.find(a[i + 1][j]) == visited.end())
    {
        res += dfs(i + 1, j);
    }
    if (j < W - 1 && visited.find(a[i][j + 1]) == visited.end())
    {
        res += dfs(i, j + 1);
    }

    visited.erase(a[i][j]);
    return res;
}

int main()
{
    cin >> H >> W;
    rep(i, H) rep(j, W)
    {
        cin >> a[i][j];
    }

    int ans = dfs(0, 0);
    cout << ans << endl;

    return 0;
}
