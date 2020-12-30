#include <vector>
#include <limits>

int maxSequence(const std::vector<int>& arr){
    auto max = int{0};
    auto max_sum = int{0};
    for (const auto& n : arr){
        max = std::max(n, max + n);
        max_sum = std::max(max_sum, max);
    }
    return max_sum;
}
