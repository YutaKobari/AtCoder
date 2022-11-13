#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> mochis(n);
  for (auto &mochi : mochis)
  {
    cin >> mochi;
  }

  sort(mochis.begin(), mochis.end());
  mochis.erase(unique(mochis.begin(), mochis.end()), mochis.end());

  cout << mochis.size() << endl;
}
