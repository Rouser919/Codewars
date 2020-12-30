#include <vector>

std::vector<int> MonkeyCount(int n) {
  std::vector<int> monkeys;
  int i=1;
  while(i<=n){
    monkeys.push_back(i);
    i++;
  }
  return monkeys;
}
