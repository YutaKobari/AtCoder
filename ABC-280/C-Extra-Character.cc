#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
  string S, T;
  cin >> S >> T;
  int answer;
  bool is_last = true;
  rep(i, S.size())
  {
    if (S[i] != T[i])
    {
      answer = i + 1;
      is_last = false;
      break;
    }
  }
  if (is_last)
    answer = T.size();
  cout << answer << endl;
  return 0;
}