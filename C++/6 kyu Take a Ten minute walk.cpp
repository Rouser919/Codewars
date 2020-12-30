#include<vector>
bool isValidWalk(std::vector<char> walk) {
    int sum_n = 0, sum_s = 0,sum_e=0,sum_w=0;
    int index = 0;
    if (walk.size() != 10) return false;
    while(index<10){
        if (walk[index] == 'n') sum_n++;
        else if (walk[index] == 's') sum_s++;
        if (walk[index] == 'e') sum_e++;
        else if (walk[index] == 'w') sum_w++;
        index++;
      
    }
    if ((sum_n == sum_s) && (sum_e == sum_w)) return true;
    return false;
    
}
