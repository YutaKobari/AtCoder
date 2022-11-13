#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int h, w;
  cin >> h >> w;
  string rows[h];
  const int dx[8] = {1, 0, -1, 0, 1, -1, 1, -1};
  const int dy[8] = {0, 1, 0, -1, 1, -1, -1, 1};

  for (int i = 0; i < h; i++)
  {
    cin >> rows[i];
  }

  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      if (rows[i][j] == '#')
        continue;

      int boms = 0;
      for (int n = 0; n < 8; n++)
      {
        int nx = j + dx[n];
        int ny = i + dy[n];
        if (nx < 0 || nx >= w)
          continue;
        if (ny < 0 || ny >= h)
          continue;
        if (rows[ny][nx] == '#')
          boms++;
      }
      rows[i][j] = char(boms + '0');
    }
  }

  for (auto &row : rows)
  {
    cout << row << endl;
  }
}
