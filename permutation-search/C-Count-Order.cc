#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;
using Pair = pair<int, int>;

int main()
{
  int n;
  cin >> n;
  vector<int> p(n);
  vector<int> q(n);
  for (int i = 0; i < n; i++)
    cin >> p[i];
  for (int i = 0; i < n; i++)
    cin >> q[i];
  vector<int> first_permutation(n);
  for (int i = 0; i < n; i++)
    first_permutation[i] = i + 1;

  // It is smarter to use map //
  int count = 0;
  map<vector<int>, int> nth_permutation;
  do
  {
    nth_permutation[first_permutation] = ++count;
  } while (next_permutation(first_permutation.begin(), first_permutation.end()));
  int answer = abs(nth_permutation[p] - nth_permutation[q]);

  // int a, b, count = 0;
  // do
  // {
  //   count++;
  //   if (first_permutation == p)
  //     a = count;
  //   if (first_permutation == q)
  //     b = count;
  // } while (next_permutation(first_permutation.begin(), first_permutation.end()));
  // int answer = abs(a - b);

  cout << answer << endl;
  return 0;
}