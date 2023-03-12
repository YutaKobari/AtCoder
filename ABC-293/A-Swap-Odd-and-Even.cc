#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length() / 2; i++)
    {
        char odd = s[2 * i];
        char even = s[2 * i + 1];
        s[2 * i] = even;
        s[2 * i + 1] = odd;
    }
    cout << s << endl;

    // 解説動画より、swap関数を使えば、もっと簡単い解ける
    // swap(s[2*i], s[2*i+1])
}