#include <iostream>
using namespace std;

int main()
{
  int a, b, k, result, count = 0;
  cin >> a >> b >> k;
  int smaller = a;
  if (a > b)
    smaller = b;

  for (int i = smaller; i > 0; i--)
  {
    if (a % i == 0 && b % i == 0)
      count++;
    if (count == k)
    {
      result = i;
      break;
    }
  }

  cout << result << endl;
  return 0;
}
