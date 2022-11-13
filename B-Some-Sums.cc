#include <iostream>
using namespace std;

int main()
{
  int n, a, b, sum = 0;
  cin >> n >> a >> b;

  for (int i = 1; i <= n; i++)
  {
    int digitsSum = 0;
    for (int j = i; j > 0; j /= 10)
    {
      digitsSum += j % 10;
    }
    if (digitsSum >= a && digitsSum <= b)
      sum += i;
  }
  cout << sum << endl;
}