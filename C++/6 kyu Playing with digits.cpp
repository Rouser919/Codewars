#include <vector>
#include <cmath>
class DigPow
{
public:
    static int digPow(int n, int p) {
        std::vector<int>accum;
        int k = n;
        int size = 0;
        while (k > 0) {
            accum.push_back(k % 10);
            k /= 10;
            size++;
        }
        size--;
        int sum = 0;
        while (size >= 0) {
            sum += pow(accum[size], p);
            p++;
            size--;
        }
        int r = sum / n;
        if (r * n == sum) return r;
        else {
            return -1;
        }


    }
};
