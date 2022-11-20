#include <iostream>
using namespace std;

int main()
{
  int max = 0;
  string s;
  cin >> s;
  int s_length = s.size();
  bool seen[s_length];
  for (int i = 0; i < s_length; i++)
    seen[i] = false;

  for (int i = 0; i < s_length; i++)
  {
    if (seen[i] == true)
      continue;
    int count = 0;
    for (int j = i; j < s_length; j++)
    {
      seen[j] = true;
      if (s[j] == 'A' || s[j] == 'C' || s[j] == 'G' || s[j] == 'T')
      {
        count++;
      }
      else
      {
        break;
      }
    }
    if (max < count)
      max = count;
  }
  cout << max << endl;
  return 0;
}
