#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
  ll n, t, a, begin_second = 0, end_second = 0, answer_nth, answer_seconds, total = 0;
  cin >> n >> t;
  vector<ll> as(n);

  rep(i, n)
  {
    cin >> as[i];
    total += as[i];
  }
  ll seconds = t % total;
  // cout << seconds << endl;
  rep(i, n)
  {
    end_second += as[i];
    if (seconds >= begin_second && seconds <= end_second)
    {
      answer_nth = i + 1;
      answer_seconds = seconds - begin_second;
      break;
    }
    begin_second = end_second;
    // cout << begin_second << " " << end_second << endl;
  }
  cout << answer_nth << endl;
  cout << answer_seconds << endl;

  return 0;
}