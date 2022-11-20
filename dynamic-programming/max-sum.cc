#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int numbers[n];
  int dp[n + 1];

  for (auto &num : numbers)
  {
    cin >> num;
  }
  dp[0] = 0;
  for (int i = 0; i < n; i++)
  {
    dp[i + 1] = max(dp[i] + numbers[i], dp[i]);
  }

  cout << dp[n] << endl;
}