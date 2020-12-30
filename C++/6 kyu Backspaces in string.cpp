std::string cleanString(const std::string& s) {
    std::string burek;
    int i = 0, act_i = 0;
    while (s.size() >i) {
        if (s[i] == '#') {
            if(!(burek.empty())){
                burek.erase(act_i-1);
                act_i--;
            }
        }
        else {
            burek.push_back(s[i]);
            act_i++;
        }
        i++;
    }
    return burek;
    // your code here
}
