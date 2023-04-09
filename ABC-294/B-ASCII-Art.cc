#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int h, n;
    cin >> h >> n;
    rep(i, h)
    {
        rep(j, n)
        {
            int a;
            cin >> a;
            char c;
            if (a == 0)
                c = '.';
            else
                c = 'A' + a - 1;
            cout << c;
        }
        cout << endl;
    }
    return 0;
}
