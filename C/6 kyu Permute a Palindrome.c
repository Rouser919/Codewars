#include <stdbool.h>

bool permute_a_palindrome(const char* str_in) {
    int size = 0;
    while (str_in[size] != '\0') {
        size++;
    }
    int ans[26] = {0};
    int index = 0;
    while (index < size) {
        if (isalpha(str_in[index])) {
            ans[tolower(str_in[index]) - 'a']++;
        }
        index++;
    }
    int div_2 = 0, div_1 = 0;
    index = 0;
    while (index < 26) {
        if (ans[index] % 2 == 0) div_2++;
        else if (ans[index] % 2 == 1) div_1++;
        index++;
    }
    if ((div_1 <= 1) && ((div_1 != 0) || (div_2 != 0))) return true;
    else return false;
       

}
