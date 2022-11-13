#include <iostream>
using namespace std;

int calc(int A[], int N, int count)
{
  for (int i = 0; i < N; i++)
  {
    if (A[i] % 2 == 1)
    {
      return count;
    }
    else
      A[i] /= 2;
  }
  count++;
  return calc(A, N, count);
}

int main()
{
  int N;
  int A[201];
  int count = 0;
  cin >> N;

  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
    if (A[i] % 2 == 1)
    {
      cout << 0 << endl;
      return 0;
    }
  }
  count = calc(A, N, count);
  cout << count << endl;
}
