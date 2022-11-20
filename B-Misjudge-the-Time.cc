#include <iostream>
using namespace std;

bool is_easy_to_misunderstand(string h, string m)
{
  string h_changed = h.substr(0, 1) + m.substr(0, 1);
  string m_changed = h.substr(1, 1) + m.substr(1, 1);

  // cout << h_changed << " : " << m_changed << endl;
  if (stoi(h_changed) < 24 && stoi(m_changed) < 60)
    return true;

  return false;
}

int main()
{
  string h, m;
  cin >> h >> m;
  if (h.size() == 1)
    h = "0" + h;
  if (m.size() == 1)
    m = "0" + m;

  for (;;)
  {
    if (is_easy_to_misunderstand(h, m))
      break;
    if (m == "59")
    {
      m = "00";
      if (h == "23")
        h = "00";
      else
        h = to_string(stoi(h) + 1);
      if (h.size() == 1)
        h = "0" + h;
    }
    else
    {
      m = to_string(stoi(m) + 1);
      if (m.size() == 1)
        m = "0" + m;
    }
  }

  cout << stoi(h) << " " << stoi(m) << endl;
  return 0;
}