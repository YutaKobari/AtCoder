#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
using Pair = pair<int, int>;

double CalcDistance(Pair a, Pair b)
{
  double dx = a.first - b.first;
  double dy = a.second - b.second;
  return sqrt(dx * dx + dy * dy);
}

int main()
{
  int n;
  cin >> n;
  vector<Pair> coordinates(n);
  for (int i = 0; i < n; i++)
  {
    int a, b;
    cin >> a >> b;
    coordinates[i] = {a, b};
  }
  double sum = 0;
  int count = 0;

  // 数学的考察を用いた回答（解説動画参照） //
  // for (int i = 0; i < n; i++)
  //   for (int j = 0; j < i; j++)
  //     sum += CalcDistance(coordinates[i], coordinates[j]);
  // double answer = 2 * sum / n;
  // cout << answer << endl;

  vector<int> p(n);
  for (int i = 0; i < n; i++)
    p[i] = i;
  do
  {
    for (int i = 0; i < n - 1; i++)
      sum += CalcDistance(coordinates[p[i]], coordinates[p[i + 1]]);
    count++;
  } while (next_permutation(p.begin(), p.end()));
  double answer = sum / count;
  cout << answer << endl;
  return 0;
}