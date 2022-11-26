#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

int main()
{
  int n, m;
  int result = 0;
  cin >> n >> m;
  vector<vector<int>> connected_switches(m);
  for (int i = 0; i < m; i++)
  {
    int k;
    cin >> k;
    vec[i].resize(k);
    for (int j = 0; j < k; j++)
      cin >> connected_switches[i][j], --connected_switches[i][j];
  }
  vector<int> ps(m);
  for (int i = 0; i < m; i++)
    cin >> ps[i];

  for (int bit = 0; bit < (1 << n); ++bit)
  {
    bool every_bulb_is_on = true;
    for (int i = 0; i < m; i++)
    {
      int count = 0;
      for (auto &connected_switch : connected_switches[i])
        if (bitset<10>(bit)[connected_switch]) // By using right shift, can write like this: if ((bit >> connected_switch) & 1)
          count++;

      if (count % 2 != ps[i])
      {
        every_bulb_is_on = false;
        break;
      }
    }

    if (every_bulb_is_on)
      result++;
  }
  cout << result << endl;
  return 0;
}