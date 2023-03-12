#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<bool> called(n, false);
    vector<int> not_called;
    rep(i, n)
    {
        int ai;
        cin >> ai;
        ai--;

        if (!called[i])
            called[ai] = true;
    }
    rep(i, n)
    {
        if (!called[i])
            not_called.push_back(i + 1);
    }
    sort(not_called.begin(), not_called.end());
    cout << not_called.size() << endl;
    for (auto &n : not_called)
        cout << n << endl;

    return 0;
}
