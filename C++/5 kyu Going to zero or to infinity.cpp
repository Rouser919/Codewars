#include <cmath>
class Suite
{
public:
  static double going(int n){
    double prev = 1, curr = 0, result = 1;
    for(int i = n; i >= 2; i--){
        curr = prev * (1.0 / i);
        result += (curr);
        prev = curr;
    }
    return floor(result * 1000000) / 1000000;
  }
};
