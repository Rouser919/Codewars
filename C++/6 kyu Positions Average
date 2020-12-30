#include <string>
#include <vector>
#include <cmath>

double posAverage(const std::string &s){                           
  std::vector<std::string> vec; 
  int n = s.find(',');
  for (int x = 0; x < s.size(); x += n+2) 
    vec.push_back(s.substr(x, n));
  for (auto i : vec)
    std::cout << i << std::endl;
  
  int count = 0, out_of = 0, size = vec.size();
  for (int i = 0; i < size; i++) 
    for (int j = i + 1; j < size; j++)
      for (int k = 0; k < n; k++) {
          out_of++;
        if (vec[i][k] == vec[j][k]) 
            count++;
        }
  return 100.0*count/out_of;
}
