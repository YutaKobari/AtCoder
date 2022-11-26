#include <string>
#include <iostream>
using namespace std;

int main()
{
  int n, count = 0;
  string s, s_cut, s_recut;
  cin >> n >> s;

  for (int i = 0; i < 10; i++)
  {
    if (s.find(to_string(i)) == string::npos || s.find(to_string(i)) > n - 3)
      continue;
    s_cut = s.substr(s.find(to_string(i)) + 1);
    // cout << "s_cut:" << s_cut << endl;
    for (int j = 0; j < 10; j++)
    {
      if (s_cut.find(to_string(j)) == string::npos || s_cut.find(to_string(j)) == s_cut.size() - 1)
        continue;
      s_recut = s_cut.substr(s_cut.find(to_string(j)) + 1);
      // cout << "s_recut:" << s_recut << endl;
      for (int k = 0; k < 10; k++)
      {
        if (s_recut.find(to_string(k)) == string::npos)
          continue;
        count++;
      }
    }
  }
  cout << count << endl;
  return 0;
}

// the exemplary solution that is alomost the same method of above
// #include <bits/stdc++.h>
// using namespace std;

// string S;
// int N, cnt;

// int main()
// {
//   cin >> N >> S;
//   for (int i = 0; i < 1000; i++)
//   {
//     int c[3] = {i / 100, (i / 10) % 10, i % 10};
//     int f = 0;
//     for (int j = 0; j < N; j++)
//     {
//       if (S[j] == ('0' + c[f]))
//         f++;
//       if (f == 3)
//         break;
//     }
//     if (f == 3)
//       cnt++;
//   }
//   cout << cnt << endl;
//   return 0;
// }
