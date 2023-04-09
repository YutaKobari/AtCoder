#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

bool check_conditions(const string &S)
{
    int k_pos = -1;
    int first_b_pos = -1;
    int second_b_pos = -1;
    int first_r_pos = -1;
    int second_r_pos = -1;

    for (int i = 0; i < 8; ++i)
    {
        char c = S[i];
        if (c == 'K')
        {
            k_pos = i;
        }
        else if (c == 'R')
        {
            if (first_r_pos == -1)
            {
                first_r_pos = i;
            }
            else
            {
                second_r_pos = i;
            }
        }
        else if (c == 'B')
        {
            if (first_b_pos == -1)
            {
                first_b_pos = i;
            }
            else
            {
                second_b_pos = i;
            }
        }
    }

    return k_pos > first_r_pos && k_pos < second_r_pos && first_b_pos % 2 != second_b_pos % 2;
}

int main()
{
    string S;
    cin >> S;

    if (check_conditions(S))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
