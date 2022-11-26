#include <iostream>
using namespace std;

int main()
{
  long a, b, x;
  cin >> a >> b >> x;
  long numA = a / x;
  long numB = b / x;
  if (a % x == 0)
    numA--;
  cout << numB - numA << endl;
}
