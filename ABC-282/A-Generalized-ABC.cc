#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
  int k;
  cin >> k;
  string answer;
  rep(i, k) answer += 'A' + i;
  cout << answer << endl;
  return 0;
}