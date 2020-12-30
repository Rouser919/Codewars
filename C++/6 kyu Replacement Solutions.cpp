#include <vector>
using namespace std;
vector<int> replacement(const vector<int> &arr){
    vector<int> k = arr;
    int index = distance(k.begin(), max_element(k.begin(), k.end()));
    if(k[index] != 1)k[index] = 1;
    else k[index] = 2;
    sort(k.begin(), k.end());
    return k;
}
