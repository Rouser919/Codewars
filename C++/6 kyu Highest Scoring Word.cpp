#include <string>

int value(char s) {
    return (s - 96);
}

std::string highestScoringWord(const std::string& str) {
    int index = 0,  index_start_word, values=0,value_high=0; // index of start word 
    std::string highscore;
    while (str.size() > index) {
        values = 0;
        index_start_word = index;
        while ((isalpha(str[index]))) {
            values += value(str[index]);
            index++;
        }
        index++;
        if (values > value_high) {
            value_high = values;
            highscore.clear();
            while (isalpha(str[index_start_word])) {
                highscore.push_back(str[index_start_word]);
                index_start_word++;

            }

        }
    }
    return highscore;
}
