char* alphabet_war(const char* fight){
    int sum_l = 0, sum_r = 0;
    int size;
    size = strlen(fight);
    int i = 0;


    while (i < size) {
        if (fight[i - 1] != '*' && fight[i + 1] != '*') {
            switch (fight[i]) {
            case 'w':
                sum_l += 4;
                break;
            case 'p':
                sum_l += 3;
                break;
            case 'b':
                sum_l += 2;
                break;
            case 's':
                sum_l += 1;
                break;
            case 'm':
                sum_r += 4;
                break;
            case 'q':
                sum_r += 3;
                break;
            case 'd':
                sum_r += 2;
                break;
            case 'z':
                sum_r += 1;
                break;
            }
        }
        i++;

    }
    if (sum_r > sum_l) {
        char* ans = (char*)malloc(strlen("Right side wins!") * (sizeof(char) + 1));
        strcpy(ans, "Right side wins!");
        return ans;
    }
    else if (sum_l > sum_r) {
        char* ans = (char*)malloc(strlen("Left side wins!") * (sizeof(char) + 1));
        strcpy(ans, "Left side wins!");
        return ans;
    }
    else {
        char* ans = (char*)malloc(strlen("Let's fight again!") * (sizeof(char) + 1));
        strcpy(ans, "Let's fight again!");
        return ans;
    }

}
