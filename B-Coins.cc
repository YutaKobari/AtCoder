#include <iostream>
using namespace std;

int main()
{
  int A, B, C, X;
  int total, count = 0;
  cin >> A >> B >> C >> X;

  for (int i = 0; i <= A; i++)
  {
    for (int j = 0; j <= B; j++)
    {
      for (int k = 0; k <= C; k++)
      {
        total = 500 * i + 100 * j + 50 * k;
        if (total == X)
        {
          count++;
          // cout << "total:" << total << " "
          //      << "i:" << i << " "
          //      << "j:" << j << " "
          //      << "k:" << k << endl;
        }
      }
    }
  }
  cout << count << endl;
}
