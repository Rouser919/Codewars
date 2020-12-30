#include <array>
#include <numeric>

int Add (int x, int y){
  std::array<int, 2> nums = {x, y};
  return std::accumulate(nums.begin(), nums.end(), 0);
}
