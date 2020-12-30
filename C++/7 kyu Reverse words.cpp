std::string reverse_words(std::string str) {
    std::string word;
    int index = 0, tmp_index = 0,tmp_id=0;
    while (index < str.size()) {
        if (!(isspace(str[index]))) {
            tmp_index = index;
            while ((!(isspace(str[tmp_index]))) &&(str.size()>tmp_index)) tmp_index++;
            tmp_id = tmp_index-1;
            while (tmp_index != index) {
                word.push_back(str[tmp_index-1]);
                tmp_index--;
            }
            index = tmp_id;
            index++;
        }
        else if (isspace(str[index])) {
            word.push_back(str[index]);
            index++;
        }

  
    }
    return word;

}
