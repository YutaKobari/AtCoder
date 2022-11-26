#include <cmath>
#include <iostream>
using namespace std;

int main()
{
  long n, a, b, result;
  cin >> n;
  long square_root = sqrt(n);

  for (long i = square_root; i > 0; i--)
  {
    if (n % i == 0)
    {
      a = i, b = n / i;
      break;
    }
  }

  // cout << "a:" << a << ", b:" << b << endl;
  result = a > b ? to_string(a).length() : to_string(b).length();
  cout << result << endl;
  return 0;
}
