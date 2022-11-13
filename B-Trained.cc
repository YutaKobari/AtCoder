#include <iostream>
using namespace std;

int n;

int main()
{
  cin >> n;
  int buttons[n + 1];
  for (int i = 1; i <= n; i++)
    cin >> buttons[i];

  char containers[n + 1];
  int next = 1;

  for (int i = 1; i <= n; i++)
  {
    if (containers[next] == '#')
    {
      cout << -1 << endl;
      return 0;
    }
    if (buttons[next] == 2)
    {
      cout << i << endl;
      return 0;
    }
    containers[next] = '#';
    next = buttons[next];
  }
  // Can't reach here but sometimes missed false(-1) pattern so set this code.
  cout << -1 << endl;
}
