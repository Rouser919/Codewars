std::vector<int> deleteNth(std::vector<int> arr, int n) {
    int tmp_count = 0, index = 1, index_tmp = 0;
    std::vector<int> delete_arr;
    if (!(arr.empty())) delete_arr.push_back(arr[0]);

    while (index < arr.size()) {
        index_tmp = 0;
        tmp_count = 0;
        while (index_tmp < delete_arr.size()) {
            if (arr[index] == delete_arr[index_tmp]) tmp_count++;
            index_tmp++;
        }
        if (tmp_count < n) {
            delete_arr.push_back(arr[index]);
        }
        index++;

    }
    return delete_arr;
}
