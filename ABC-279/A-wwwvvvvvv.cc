#include <iostream>
using namespace std;

int main()
{
  int answer = 0;
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == 'v')
      answer++;
    if (s[i] == 'w')
      answer += 2;
  }

  cout << answer << endl;
  return 0;
}