#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
  int N;
  cin >> N;
  int S[N + 1], A[N + 1];
  rep(i, N) cin >> S[i + 1];
  A[1] = S[1];
  rep(i, N - 1) A[i + 2] = S[i + 2] - S[i + 1];
  rep(i, N) cout << A[i + 1] << endl;
  return 0;
}