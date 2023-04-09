#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    vector<int> c(n + m); // v1とv2の要素数の合計分のvectorを用意
    rep(i, n)
    {
        int tmp;
        cin >> tmp;
        a[i] = tmp;
        c[i] = tmp;
    }
    rep(i, m)
    {
        int tmp;
        cin >> tmp;
        b[i] = tmp;
        c[i + n] = tmp;
    }

    sort(c.begin(), c.end());
    // rep(i, n + m)
    // {
    //     cout << c[i] << " ";
    // }
    // cout << endl;

    vector<int> a_idx(n), b_idx(m);
    for (int i = 0; i < n; i++)
    {
        a_idx[i] = lower_bound(c.begin(), c.end(), a[i]) - c.begin() + 1;
    }
    for (int i = 0; i < m; i++)
    {
        b_idx[i] = lower_bound(c.begin(), c.end(), b[i]) - c.begin() + 1;
    }

    rep(i, n)
    {
        cout << a_idx[i] << " ";
    }
    cout << endl;
    rep(i, m)
    {
        cout << b_idx[i] << " ";
    }
    cout << endl;
    return 0;
}
