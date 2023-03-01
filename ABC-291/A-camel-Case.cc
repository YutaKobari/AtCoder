#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
const ll INF = 1LL << 60;
bool dp[2505][10100];

int main()
{
    string s;
    int answer;
    cin >> s;
    rep(i, s.length())
    {
        if (isupper(s[i]))
            answer = i + 1;
    }

    cout << answer;
}