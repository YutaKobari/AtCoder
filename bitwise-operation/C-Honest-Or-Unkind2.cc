#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

int counter(int bit)
{
  if (bit == 0)
    return 0;
  return counter(bit >> 1) + (bit & 1);
}

int main()
{
  int n;
  cin >> n;
  vector<vector<pair<int, int>>> testimonies(n);
  for (int i = 0; i < n; i++)
  {
    int k;
    cin >> k;
    testimonies[i].resize(k);
    for (int j = 0; j < k; j++)
    {
      int x, y;
      cin >> x >> y;
      testimonies[i][j] = {--x, y};
    }
  }

  int result = 0;
  for (int bit = 0; bit < (1 << n); ++bit)
  {
    bool can = true;
    // one by one, check for discrepancies.
    for (int i = 0; i < n; i++)
    {
      if (!(bit >> i & 1))
        continue;
      for (auto &testimony : testimonies[i])
      {
        if ((bit >> testimony.first & 1) != testimony.second)
        {
          can = false;
          break;
        }
      }
      if (!can)
        break;
    }
    if (can)
      result = max(result, counter(bit));
  }

  cout << result << endl;
  return 0;
}