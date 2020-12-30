#include <cmath>
bool is_square(int n)
{
  float s=sqrt(n);
  if ((int(s)*int(s))==n) return true;
  return false;
}
