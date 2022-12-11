#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

ll countFactorialIsDivisible(ll target, ll divisor)
{
  if (target == 0)
    return 0;
  target /= divisor;
  return target + countFactorialIsDivisible(target, divisor);
}

vector<pair<ll, int>> primeFactorizationin(ll straw)
{
  vector<pair<ll, int>> primes;
  for (ll i = 2; i * i <= straw; i++)
  {
    if (straw % i != 0)
      continue;
    int exponent = 0;
    while (straw % i == 0)
    {
      straw /= i;
      exponent++;
    }
    primes.emplace_back(i, exponent);
  }
  // straw in this point must be prime over square root of straw (argument)
  if (straw != 1)
    primes.emplace_back(straw, 1);
  return primes;
}

// utilize binary search
int main()
{
  ll k;
  cin >> k;
  vector<pair<ll, int>> primes = primeFactorizationin(k);
  ll ac = k, wa = 0;
  while (ac - wa > 1)
  {
    ll wj = (ac + wa) / 2;
    bool ok = true;
    for (auto [base, exponent] : primes)
      if (countFactorialIsDivisible(wj, base) < exponent)
        ok = false;
    if (ok)
      ac = wj;
    else
      wa = wj;
  }
  cout << ac << endl;
  return 0;
}