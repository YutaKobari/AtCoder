#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> edges(m);
    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        edges[i] = {a, b};
    }
    dsu uf(n);
    for (auto [a, b] : edges)
        uf.merge(a, b);
    vector<int> num_vertexes(n), num_edges(n);
    rep(i, n) num_vertexes[uf.leader(i)]++;
    for (auto [a, b] : edges)
        num_edges[uf.leader(a)]++;
    string answer = "Yes";
    rep(i, n)
    {
        if (!num_vertexes[i])
            continue;
        if (num_vertexes[i] != num_edges[i])
            answer = "No";
    }
    cout << answer << endl;
    return 0;
}
