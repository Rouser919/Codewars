#include <vector>
#include <algorithm>

class BestTravel
{
public:
    static int chooseBestSum(int t, int k, std::vector<int>& ls);
};

int BestTravel::chooseBestSum(int t, int k, std::vector<int>& ls){
    unsigned int n = ls.size();
    if ((unsigned int)k > n) return -1;
    int mx = -1, sm;
    std::string bitmask(k, 1);
    bitmask.resize(n, 0);
    do {
        sm = 0;
        for (unsigned int i = 0; i < n; ++i)
            if (bitmask[i]) sm += ls[i];
        if ((sm >= mx) && (sm <= t)) mx = sm;
    } while (std::prev_permutation(bitmask.begin(), bitmask.end()));
    return mx;
}
