#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
const ll INF = 1LL << 60;

int main()
{
    int n;
    string S;
    cin >> n >> S;
    int x = 0, y = 0; // 初期座標は(0,0)
    set<pair<int, int>> visited;
    visited.insert(make_pair(0, 0)); // 初期座標をvisitedに追加
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'R')
            x++;
        else if (S[i] == 'L')
            x--;
        else if (S[i] == 'U')
            y++;
        else if (S[i] == 'D')
            y--;
        visited.insert(make_pair(x, y));
    }
    if (visited.size() == S.size() + 1)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
    return 0;
}
