// 累積和を利用
#include <iostream>
using namespace std;

int main()
{
  int n, max = 0;
  cin >> n;
  int row1[n], row2[n];
  for (auto &num1 : row1)
  {
    cin >> num1;
  }
  for (auto &num2 : row2)
  {
    cin >> num2;
  }

  for (int i = 1; i < n; i++)
  {
    row1[i] += row1[i - 1];
    row2[i] += row2[i - 1];
  }

  for (int i = 0; i < n; i++)
  {
    int sum = 0;
    sum += row1[i];
    if (i > 0)
    {
      sum += row2[n - 1] - row2[i - 1];
    }
    else
    {
      sum += row2[n - 1];
    }
    if (max < sum)
      max = sum;
  }

  cout << max << endl;
}
