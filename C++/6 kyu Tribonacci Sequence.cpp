std::vector<int> tribonacci(std::vector<int> signature, int n){
    std::vector<int> result;
    int i = 0;
    if (n <= 3) {
        while (i < n) {
            result.push_back(signature[i]);
            i++;
        }
        return result;
    }
    result.push_back(signature[0]);
    result.push_back(signature[1]);
    result.push_back(signature[2]);
    i = 3;
    while (i < n) {
        result.push_back(result[i - 1] + result[i - 2]+result[i-3]);
        i++;
    }
    return result;
}
