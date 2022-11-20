#include <cmath>
#include <iostream>
using namespace std;

// O(1)での解き方（数学的考察利用）
// int main()
// {
//   long a, b, c, x, y, result;
//   cin >> a >> b >> c >> x >> y;

//   if (a + b <= 2 * c)
//   {
//     result = a * x + b * y;
//     cout << result << endl;
//     return 0;
//   }

//   if (x <= y)
//     result = (min(2 * c * y, 2 * c * x + b * (y - x)));
//   else
//     result = (min(2 * c * x, 2 * c * y + a * (x - y)));

//   cout << result << endl;
//   return 0;
// }

int main()
{
  int a, b, c, x, y, result = 2 * 100001 * 5000;
  cin >> a >> b >> c >> x >> y;

  int price;
  for (int i = 0; i < 100001; i++)
  {
    price = 2 * c * i + a * max(0, x - i) + b * max(0, y - i);
    result = min(price, result);
  }

  cout << result << endl;
  return 0;
}