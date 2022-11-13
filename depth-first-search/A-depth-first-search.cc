#include <iostream>
#include <vector>
using namespace std;

int h, w;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
bool seen[500][500];
vector<string> sections;

void dfs(int x, int y)
{
  seen[y][x] = true;

  for (int i = 0; i < 4; i++)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (nx < 0 || ny < 0 || nx >= w || ny >= h)
      continue;
    if (sections[ny][nx] == '#')
      continue;
    if (seen[ny][nx])
      continue;
    dfs(nx, ny);
  }
}
int main()
{
  cin >> h >> w;
  sections.resize(h);
  for (auto &section : sections)
    cin >> section;

  int sx, sy, gx, gy;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      if (sections[i][j] == 's')
        sy = i, sx = j;
      if (sections[i][j] == 'g')
        gy = i, gx = j;
    }
  }

  for (auto &row : seen)
  {
    for (auto &elm : row)
    {
      elm = false;
    }
  }

  dfs(sx, sy);
  if (seen[gy][gx] == true)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}
