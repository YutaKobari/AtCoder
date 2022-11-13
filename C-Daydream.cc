#include <iostream>
using namespace std;

void cutBackward(const string &s, int charNum)
{
  if (charNum == 0)
  {
    cout << "YES" << endl;
    return;
  }

  static const string dividers[] = {"erase", "dream", "eraser", "dreamer"};
  for (auto &divider : dividers)
  {
    int length = divider.length();
    if (charNum < length)
    {
      cout << "NO" << endl;
      return;
    }
    if (s.substr(charNum - length, length) == divider)
      return cutBackward(s, charNum - length);
  }

  // string a5 = s.substr(charNum - 5, 5);
  // if (a5 == "dream" || a5 == "erase")
  //   return cutBackward(s, charNum - 5);
  // string a6 = s.substr(charNum - 6, 6);
  // if (a6 == "eraser")
  //   return cutBackward(s, charNum - 6);
  // string a7 = s.substr(charNum - 7, 7);
  // if (a7 == "dreamer")
  //   return cutBackward(s, charNum - 7);

  cout << "NO" << endl;
  return;
}

int main()
{
  string s;
  cin >> s;

  cutBackward(s, s.length());
}