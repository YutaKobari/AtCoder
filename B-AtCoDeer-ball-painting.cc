#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;

  int cases = k * pow(k - 1, n - 1);
  cout << cases << endl;
}