#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

bool isNumber(const string &str)
{
  for (char const &c : str)
  {
    if (std::isdigit(c) == 0)
      return false;
  }
  return true;
}

int main()
{
  string s;
  cin >> s;
  if (s.size() != 8)
  {
    cout << "No" << endl;
    return 0;
  }
  if (!isupper(s[0]) || !isupper(s[7]))
  {
    cout << "No" << endl;
    return 0;
  }
  string s_middle = s.substr(1, 6);
  if (!isNumber(s_middle))
  {
    cout << "No" << endl;
    return 0;
  }
  int s_middle_num = stoi(s_middle);
  if (s_middle_num >= 100000 && s_middle_num <= 999999)
  {
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;

  return 0;
}