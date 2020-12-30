#include <vector>

std::vector<std::vector<int> > matrixAddition(std::vector<std::vector<int> > a,std::vector<std::vector<int> > b){
  const int n = a.size();

  std::vector<std::vector<int>> result(n, std::vector<int>(n));

  for (size_t i = 0; i < n; ++i){
    for (size_t j = 0; j < n; ++j){
      result[i][j] = a[i][j] + b[i][j];
    }
  }
  return result;
}
