#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long long a, b;
  cin >> a >> b;
  long long count_smaller = max(pow((double)a / (2 * b), 2. / 3.), 1.);
  long long count_larger = count_smaller + 1;
  double answer = min(a / sqrt(count_larger) + b * (count_larger - 1), a / sqrt(count_smaller) + b * (count_smaller - 1));
  printf("%.10f", answer);
  return 0;
}