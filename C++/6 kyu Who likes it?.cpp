std::string likes(const std::vector<std::string>& names) {
    if (names.empty()) return "no one likes this";
    std::string likes_arr;
    if ((names.size() > 0) && (names.size() < 4)) {
        if (names.size() == 1) {
            likes_arr = names[0] + " likes this";
        }
        else if (names.size() == 2) {
            likes_arr = names[0] + " and " + names[1] + " like this";
        }
        else {
          
            likes_arr = names[0] + ", " + names[1] + " and " + names[2] + " like this";
        }
    }

    else if (names.size() >= 4) {
        likes_arr = names[0] + ", " + names[1] + " and ";
        int size = names.size() - 2;
        std::string values;
        int ind = 0;
        while (size > 0) {
            values.push_back(size % 10+48);
            size /= 10;
            ind++;
           
        }
        ind--;
        while (ind >= 0) {
            likes_arr.push_back(values[ind]);
            ind--;
        }
        likes_arr += " others like this";
    }
    return likes_arr;
}
