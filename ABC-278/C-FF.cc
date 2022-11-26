#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
using Pair = pair<int, int>;

int main()
{
  int n, q, count = 0;
  cin >> n >> q;

  set<Pair> ff_pairs;
  for (int i = 0; i < q; i++)
  {
    int t, a, b;
    cin >> t >> a >> b;
    if (t == 1)
      ff_pairs.emplace(Pair(a, b));
    if (t == 2)
      ff_pairs.erase(Pair(a, b));
    if (t == 3)
    {
      if (ff_pairs.count(Pair(a, b)) && ff_pairs.count(Pair(b, a)))
        cout << "Yes" << endl;
      else
        cout << "No" << endl;
    }
  }

  return 0;
}
