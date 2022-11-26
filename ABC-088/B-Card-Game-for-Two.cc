#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> cards(n);
  int sumOfA = 0, sumOfB = 0;

  for (auto &card : cards)
  {
    cin >> card;
  }

  sort(begin(cards), end(cards), greater<int>());

  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
      sumOfA += cards[i];
    else
      sumOfB += cards[i];
  }

  cout << sumOfA - sumOfB << endl;
}
