#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

ll num_operations(ll a, ll b)
{
    ll count = 0;
    while (a != 0 && b != 0)
    {
        if (a > b)
        {
            count += a / b;
            a %= b;
        }
        else
        {
            count += b / a;
            b %= a;
        }
    }
    return count - 1;
}

int main()
{
    ll A, B;
    cin >> A >> B;

    ll answer = num_operations(A, B);

    cout << answer << endl;
    return 0;
}
