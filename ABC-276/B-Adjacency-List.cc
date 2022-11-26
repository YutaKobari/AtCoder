#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> adjacencyList(n + 1);

  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    adjacencyList[a - 1].push_back(b);
    adjacencyList[b - 1].push_back(a);
  }

  for (int i = 0; i < n; i++)
  {
    cout << size(adjacencyList[i]);
    sort(begin(adjacencyList[i]), end(adjacencyList[i]));
    for (int cityNum : adjacencyList[i])
    {
      cout << " " << cityNum;
    }
    cout << endl;
  }
}