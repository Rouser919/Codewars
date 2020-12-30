#include<string>

bool scramble(const std::string& s1, const std::string& s2) {
    int arr_s1[26]{ 0 };
    int arr_s2[26]{ 0 };
    int index = 0;
    while (index < s1.size()) {
        if (s1[index] - 'a' < 26) {
            arr_s1[s1[index] - 'a']++;
        }
        index++;
    }
    index = 0;
    while (index < s2.size()) {
        if (s2[index] - 'a' < 26) {
            arr_s2[s2[index] - 'a']++;
        }
        index++;
    }
    int valid = 1;
    index = 0;
    while((valid == 1)&&index<26) {
        if (arr_s1[index] < arr_s2[index]) valid = 0;
        index++;
    }
    if (valid == 1) return true;
    else {
        return false;
    }
    
}
