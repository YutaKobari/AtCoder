#include <iostream>
using namespace std;

int main()
{
  string S;
  cin >> S;
  int size = S.length();
  int res = -1;

  for (int i = size - 1; i >= 0; i--)
  {
    // cout << "i:" << i << " " << "S[i]:" << S[i] << " " << "size:" << size << endl;
    if (S[i] == 'a')
    {
      res = i + 1;
      break;
    }
  }
  cout << res << endl;
}