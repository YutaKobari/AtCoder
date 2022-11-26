#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> inputs(n);

  for (int i = 0; i < n; i++)
  {
    int t, x, y;
    cin >> t >> x >> y;
    inputs[i].push_back(t);
    inputs[i].push_back(x);
    inputs[i].push_back(y);
  }

  // cout << inputs[0][0] << inputs[0][1] << inputs[0][2] << endl;
  // cout << inputs[1][0] << inputs[1][1] << inputs[1][2] << endl;

  vector<int> source(3);
  source = {0, 0, 0};

  for (int i = 0; i < n; i++)
  {
    vector<int> destination(3);
    destination = inputs[i];

    int dt = destination[0] - source[0];
    int dx = abs(destination[1] - source[1]);
    int dy = abs(destination[2] - source[2]);

    int over = dt - (dx + dy);

    if (over < 0 || over % 2 == 1)
    {
      cout << "No" << endl;
      return 0;
    }

    source = destination;
  }

  cout << "Yes" << endl;
  return 0;
}