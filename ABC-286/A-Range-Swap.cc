#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
  int n, p, q, r, s;
  cin >> n >> p >> q >> r >> s;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  for (int i = 0; i < p - 1; i++)
    cout << a[i] << endl;
  for (int i = r; i < s + 1; i++)
    cout << a[i - 1] << endl;
  for (int i = q + 1; i < r; i++)
    cout << a[i - 1] << endl;
  for (int i = p; i < q + 1; i++)
    cout << a[i - 1] << endl;
  for (int i = s + 1; i <= n; i++)
    cout << a[i - 1] << endl;

  return 0;
}