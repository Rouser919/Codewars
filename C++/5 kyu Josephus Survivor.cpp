int josephusSurvivor(int n, int k) {
    int i = 1;
    std::vector<int> arr;
    while (i <= n) {
        arr.push_back(i);
        i++;
    }
    int  counter = k;
    int tmp_index = -1;
    while (arr.size() != 1) {
        if (counter == 0) {
            arr.erase(arr.begin()+ tmp_index);
            tmp_index--;
            counter = k;
        }
        if (tmp_index +1== arr.size()) tmp_index =-1;
        counter--;
        tmp_index++;

    }


    return arr[0];
  
}
