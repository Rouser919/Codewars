int FindOutlier(std::vector<int> arr) {
    int row = 0, n = 0, p = 0, last_p, last_n;
    while (arr.size() >= row) {
        if ((abs(arr[row])) % 2 == 0) {
            last_p = arr[row];
            p++;
        }
        else if ((abs(arr[row])) % 2 == 1) {
            last_n = arr[row];
            n++;
        }
        row++;
        if (n > 1 || p > 1) {
            if (n > 1 && p==1) return last_p;
            else if (p > 1 && n==1) return last_n;
        }
    }
}
