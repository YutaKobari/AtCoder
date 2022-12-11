#include <iostream>
#include <vector>
using namespace std;

int main()
{
  string answer = "No";
  string s, t;
  cin >> s >> t;
  vector<int> index_of_matched_char;
  for (int i = 0; i < s.size(); i++)
    if (t[0] == s[i])
      index_of_matched_char.push_back(i);

  for (auto &num : index_of_matched_char)
  {
    bool can = true;
    for (int i = 0; i < t.size(); i++)
    {
      if (num + i >= s.size() || s[num + i] != t[i])
      {
        can = false;
        break;
      }
    }
    if (can)
    {
      answer = "Yes";
      break;
    }
  }

  cout << answer << endl;
  return 0;
}