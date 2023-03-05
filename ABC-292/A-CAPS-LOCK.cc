#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
const ll INF = 1LL << 60;
bool dp[2505][10100];

int main()
{
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s << endl;
    return 0;
}