#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int h, w;
vector<string> transposeAndSort(vector<string> rows)
{
  vector<string> columns(w);
  rep(i, h) rep(j, w) columns[j] += rows[i][j];
  sort(columns.begin(), columns.end());
  return columns;
}

int main()
{
  cin >> h >> w;
  vector<string> s_rows(h), t_rows(h);
  rep(i, h) cin >> s_rows[i];
  rep(i, h) cin >> t_rows[i];
  vector<string> s_columns_sorted = transposeAndSort(s_rows);
  vector<string> t_columns_sorted = transposeAndSort(t_rows);
  string answer = "No";
  if (s_columns_sorted == t_columns_sorted)
    answer = "Yes";
  cout << answer << endl;
  return 0;
}