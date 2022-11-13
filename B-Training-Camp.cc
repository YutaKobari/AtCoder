#include <iostream>
using namespace std;

int main()
{
  long n, power = 1;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    power = (i * power) % 1000000007;
  }

  cout << power << endl;
}