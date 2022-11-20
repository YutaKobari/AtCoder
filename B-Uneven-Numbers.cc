// nはたかだか10万以下なので愚直にn個をforループで走査するので問題ないが、ここでは効率を求めて実装した
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string n_string = to_string(n);
  int digit = n_string.length(), result = 0;
  if (digit % 2 == 1)
    result = n - pow(10, digit - 1) + 1;

  string r_string = "0";
  for (int i = digit - 2; i >= 0; i--)
  {
    if (i % 2 == 1)
      r_string += "0";
    else
      r_string += "9";
  }
  result += stoi(r_string);
  cout << result << endl;
  return 0;
}
