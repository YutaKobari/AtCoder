#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
const ll INF = 1LL << 60;
bool dp[2505][10100];

int main()
{
    int n;
    cin >> n;
    vector<int> xs(5 * n);
    rep(i, 5 * n) cin >> xs[i];
    sort(xs.begin(), xs.end());

    double sum = 0;
    for (int i = n; i < 4 * n; i++)
    {
        sum += xs[i];
    }

    cout << sum / (3 * n);
}