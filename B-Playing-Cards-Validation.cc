#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<string> chars(n);
  for (auto &c : chars)
    cin >> c;
  sort(chars.begin(), chars.end());

  for (int i = 0; i < n; ++i)
  {
    if (chars[i][0] != 'H' && chars[i][0] != 'D' && chars[i][0] != 'C' && chars[i][0] != 'S')
    {
      cout << "No";
      return 0;
    }
    if (chars[i][1] != 'A' && chars[i][1] != '2' && chars[i][1] != '3' && chars[i][1] != '4' && chars[i][1] != '5' && chars[i][1] != '6' && chars[i][1] != '7' && chars[i][1] != '8' && chars[i][1] != '9' && chars[i][1] != 'T' && chars[i][1] != 'J' && chars[i][1] != 'Q' && chars[i][1] != 'K')
    {
      cout << "No";
      return 0;
    }
    if (chars[i] == chars[i + 1] && i < n - 1)
    {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
  return 0;
}
