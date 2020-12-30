#include <string>
#include <vector>
#include <numeric>

class LongestConsec{
public:
    static std::string longestConsec(std::vector<std::string> &strarr, int k) {
      if (strarr.size() == 0 || k > strarr.size() || k <= 0) {
        return "";
      } 
      std::string result;
      for (auto x = strarr.begin(); x != strarr.end() - k + 1; x++) {
          auto tmp_res = std::accumulate(x, x + k, std::string(""));
          if (tmp_res.length() > result.length())
            result = tmp_res;
      }
      return result;
    }
};
