#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
const ll INF = 1LL << 60;
bool dp[2505][10100];

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> cards(n, 0);

    rep(i, q)
    {
        int c, x;
        cin >> c >> x;
        x--;

        if (c == 1)
            cards[x]++;
        else if (c == 2)
            cards[x] += 2;
        else
        {
            if (cards[x] >= 2)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}