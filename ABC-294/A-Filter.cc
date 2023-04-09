#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    rep(i, n)
    {
        int ai;
        cin >> ai;
        if (ai % 2 == 0)
            cout << ai << endl;
    }
    return 0;
}
