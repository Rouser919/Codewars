#include <cmath>
#include <utility>
#include <vector>

class SumSquaredDivisors
{
public:
    static std::vector<std::pair<long long, long long>> listSquared(long long m, long long n);
};
std::vector<std::pair<long long, long long>> SumSquaredDivisors::listSquared(long long m, long long n){
    std::vector<std::pair<long long, long long>> list_of_squared;
    long long  tmp;
    int tmp_sqrt;
    while (m<n){
        tmp=0;
        for (int i=1; i<=sqrt(m);i++){
            if(m%i==0){
                if(m/i==i){
                    tmp+=pow(i,2);
                }
                else {
                    tmp+=pow(i,2)+pow(m/i,2);
                }
            }
        }
        tmp_sqrt=sqrt(tmp);
        if(tmp==tmp_sqrt*tmp_sqrt){
            list_of_squared.push_back(std::make_pair(m,tmp));
        }
         m++;
     }
    return list_of_squared;

}
