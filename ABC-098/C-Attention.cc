// 累積和を利用
#include <iostream>
using namespace std;

int main()
{
  int n;
  string s;
  cin >> n >> s;
  int min = n;
  int e[n] = {}, w[n] = {};

  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'E')
      e[i] = 1;
    if (s[i] == 'W')
      w[i] = 1;
  }

  for (int i = 1; i < n; i++)
  {
    e[i] += e[i - 1];
    w[i] += w[i - 1];
  }

  for (int i = 0; i < n; i++)
  {
    int sum = 0;
    if (i > 0)
      sum += w[i - 1];
    sum += e[n - 1] - e[i];
    if (sum < min)
      min = sum;
  }

  cout << min << endl;
}
