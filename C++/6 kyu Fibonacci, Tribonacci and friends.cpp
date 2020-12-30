std::vector<int> xbonacci(std::vector<int> signature, int n){
    int range_x = signature.size();
    std::vector<int> x_bonac = signature;
    if (range_x > n) {
        x_bonac.resize(n);
        return x_bonac;
    }
    int index = range_x, tmp, index_x = 0;
    while (index < n) {
        tmp = 0;
        index_x = range_x;
        while (index_x > 0) {
            tmp += x_bonac[index - index_x];
            index_x--;
        }
        x_bonac.push_back(tmp);
        index++;
    }
    return x_bonac;
}
