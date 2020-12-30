#include <cmath>    
    bool narcissistic(int value) {
        int count = 0, tmp = value;
        std::vector<int> tab;
        while (tmp > 0) {
            tab.push_back(tmp % 10);
            tmp /= 10;
            count++;
        }
        int index = 0,sum=0;
        while (index < tab.size()) {
            sum += pow(tab[index], count);
            index++;

        }
        if (sum == value) return true;
        else {
            return false;
        }

        //Code away
    }
