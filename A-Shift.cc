#include <vector>
#include <iostream>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> vec(n);

  for (int i = 0; i < n; i++)
  {
    cin >> vec[i];
  }
  for (int i = 0; i < k; i++)
  {
    vec.erase(vec.begin());
    vec.push_back(0);
  }
  for (auto &e : vec)
  {
    cout << e << endl;
  }
  return 0;
}
