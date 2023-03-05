#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

ll computeDivisorsCount(ll n)
{
    ll divisors_count = 1;
    if (n == 1)
        return 1;
    if (n <= 3)
        return 2;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i != 0)
            continue;
        int ex = 0;
        while (n % i == 0)
        {
            ex++;
            n /= i;
        }
        divisors_count *= ex + 1;
    }
    if (n != 1)
        divisors_count *= 2;
    return divisors_count;
}

int main()
{
    ll n;
    cin >> n;
    ll ab_divisors_count = 0, bc_divisors_count = 0, answer = 0;
    for (ll ab = 1; ab < n; ab++)
    {
        ab_divisors_count = computeDivisorsCount(ab);
        ll bc = n - ab;
        bc_divisors_count = computeDivisorsCount(bc);
        answer += (ab_divisors_count * bc_divisors_count);
    }

    cout << answer << endl;
    return 0;
}
