#include <cmath>
#include <iostream>
using namespace std;

int main()
{
  int n, result = 0;
  cin >> n;

  for (int i = 1; i <= n; i += 2)
  {
    int count = 0;
    for (int j = 1; j <= sqrt(i); j += 2)
    {
      if (i % j == 0)
        count++;
    }
    if (count == 4)
      result++;
  }
  cout << result << endl;
  return 0;
}
