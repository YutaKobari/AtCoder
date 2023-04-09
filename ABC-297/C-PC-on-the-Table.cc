#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int H, W;
    cin >> H >> W;

    vector<string> S(H);
    for (int i = 0; i < H; ++i)
    {
        cin >> S[i];
    }

    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W - 1; ++j)
        {
            if (S[i][j] == 'T' && S[i][j + 1] == 'T')
            {
                S[i][j] = 'P';
                S[i][j + 1] = 'C';
            }
        }
    }

    for (const string &row : S)
    {
        cout << row << endl;
    }

    return 0;
}
