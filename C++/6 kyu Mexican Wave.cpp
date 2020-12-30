std::vector<std::string> wave(std::string y) {
    int counter = 0;
    int index;
    for (index= 0; index < y.size(); index++) {
        if (isalpha(y[index]))counter++;
    }
    index = 0;
    int tmp_counter = 0, tmp_index = 0;
    std::vector<std::string> arr;
    while (index < counter) {
        arr.push_back(y);
        tmp_counter = 0;
        tmp_index = 0;
        while (tmp_counter <= index && tmp_index<y.size()) {
            if (isalpha(arr[index][tmp_index]) && tmp_counter == index) {
                arr[index][tmp_index] = toupper(arr[index][tmp_index]);
                tmp_counter++;
            }
            else if (isalpha(arr[index][tmp_index])) tmp_counter++;
            tmp_index++;
        }
        index++;
    }
    return arr;
}
