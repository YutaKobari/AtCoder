#include <iostream>
using namespace std;

int main()
{
  int h, w;
  cin >> h >> w;
  string rows[h];
  for (auto &row : rows)
  {
    cin >> row;
  }

  int dx[4] = {0, 1, -1, 0};
  int dy[4] = {1, 0, 0, -1};

  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      int can = false;
      for (int k = 0; k < 4; k++)
      {
        int x = j + dx[k];
        int y = i + dy[k];
        if (rows[i][j] == '.')
        {
          can = true;
          break;
        }
        if (x < 0 || x >= w)
          continue;
        if (y < 0 || y >= h)
          continue;
        if (rows[y][x] == '#')
          can = true;
      }
      if (can == false)
      {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}

// // Exemplary answer
// #include <iostream>
// using namespace std;

// char c[55][55];
// int H, W, cnt;

// int main()
// {
//   cin >> H >> W;
//   for (int i = 1; i <= H; i++)
//   {
//     for (int j = 1; j <= W; j++)
//       cin >> c[i][j];
//   }
//   for (int i = 1; i <= H; i++)
//   {
//     for (int j = 1; j <= W; j++)
//     {
//       if (c[i][j] == '#' && c[i][j - 1] != '#' && c[i - 1][j] != '#' && c[i][j + 1] != '#' && c[i + 1][j] != '#')
//         cnt++;
//     }
//   }
//   if (cnt == 0)
//     cout << "Yes" << endl;
//   else
//     cout << "No" << endl;
//   return 0;
// }
