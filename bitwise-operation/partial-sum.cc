#include <iostream>
using namespace std;

int main()
{
  int n, k, a[n];
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  cin >> k;

  // {0, 1, ..., n-1} の部分集合の全探索
  bool exists = false;
  for (int bit = 0; bit < (1 << n); ++bit)
  {
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
      if (bit & (1 << i))
        sum += a[i];
    }
    if (sum == k)
    {
      exists = true;
      break;
    }
  }
  if (exists)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}