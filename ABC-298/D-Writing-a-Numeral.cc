#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

const int MOD = 998244353;
long long arr[600005];

int main()
{
    arr[0] = 1ll;
    for (int i = 1; i < 600005; i++)
    {
        arr[i] = (arr[i - 1] * 10) % MOD;
    }

    int Q;
    cin >> Q;

    queue<int> S;
    S.push(1);
    ll result = 1;

    for (int q = 0; q < Q; ++q)
    {
        int query_type;
        cin >> query_type;

        if (query_type == 1)
        {
            int x;
            cin >> x;
            S.push(x);
            result = (result * 10 + 1ll * x) % MOD;
        }
        else if (query_type == 2)
        {
            int x = S.front();
            result = ((result - x * arr[S.size() - 1]) % MOD + MOD) % MOD;
            S.pop();
        }
        else
        {
            cout << result << endl;
        }
    }

    return 0;
}
