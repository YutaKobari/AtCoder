#include <iostream>
#include <vector>
using namespace std;

int h, w;
const int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
const int dy[8] = {0, 1, 0, -1, 1, -1, -1, 1};
bool seen[50][50];
vector<vector<int>> sections;

void dfs(int x, int y)
{
  seen[y][x] = true;

  for (int i = 0; i < 8; i++)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (nx < 0 || ny < 0 || nx >= w || ny >= h || sections[ny][nx] == 0)
      continue;
    if (seen[ny][nx] == true)
      continue;
    dfs(nx, ny);
  }
}
int main()
{
  for (;;)
  {
    cin >> w >> h;
    if (h == 0 && w == 0)
      break;
    sections.clear();
    sections.resize(h);
    for (int i = 0; i < h; i++)
    {
      for (int j = 0; j < w; j++)
      {
        int isBurried;
        cin >> isBurried;
        sections[i].push_back(isBurried);
      }
    }

    for (auto &row : seen)
    {
      for (auto &elm : row)
      {
        elm = false;
      }
    }

    int count = 0;
    for (int i = 0; i < h; i++)
    {
      for (int j = 0; j < w; j++)
      {
        if (seen[i][j] == true)
          continue;
        if (sections[i][j] == 0)
          continue;
        dfs(j, i);
        count++;
      }
    }
    cout << endl
         << count;
  }
  cout << endl;
  return 0;
}
