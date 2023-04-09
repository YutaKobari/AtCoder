#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n, q;
    cin >> n >> q;

    set<int> waiting;
    set<int> called;
    rep(i, n)
        waiting.insert(i + 1);

    rep(i, q)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int x = *waiting.begin();
            waiting.erase(x);
            called.insert(x);
        }
        else if (type == 2)
        {
            int x;
            cin >> x;
            waiting.erase(x);
            called.erase(x);
        }
        else
        {
            int x = *called.begin();
            cout << x << endl;
        }
    }

    return 0;
}
