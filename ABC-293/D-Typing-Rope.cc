#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n, m, num_cyclic_components = 0;
    cin >> n >> m;
    dsu uf(n);
    rep(i, m)
    {
        int a, c;
        char b, d;
        cin >> a >> b >> c >> d;
        a--, c--;
        if (uf.same(a, c))
            num_cyclic_components++;
        uf.merge(a, c);
    }
    int num_connected_components = uf.groups().size();
    int num_not_cyclic_components = num_connected_components - num_cyclic_components;
    cout << num_cyclic_components << ' ' << num_not_cyclic_components << endl;
    return 0;
}
