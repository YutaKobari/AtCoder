#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

// 二階微分を使った解法
// int main()
// {
//   long long a, b;
//   cin >> a >> b;
//   long long count_smaller = max(pow((double)a / (2 * b), 2. / 3.), 1.);
//   long long count_larger = count_smaller + 1;
//   double answer = min(a / sqrt(count_larger) + b * (count_larger - 1), a / sqrt(count_smaller) + b * (count_smaller - 1));
//   printf("%.10f", answer);
//   return 0;
// }

// 三分探索
double f(ll a, ll b, ll count)
{
  return b * (double)count + a / sqrt(count + 1);
}

int main()
{
  ll a, b, left = 0, right = 1e18;
  cin >> a >> b;
  while (left + 2 < right)
  {
    ll next_left = (2 * left + right) / 3;
    ll next_right = (left + 2 * right) / 3;
    f(a, b, next_left) < f(a, b, next_right) ? right = next_right : left = next_left;
  }

  double answer = min({f(a, b, left), f(a, b, left + 1), f(a, b, right)});
  printf("%.10f", answer);
  return 0;
}