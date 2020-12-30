#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>

#include <stddef.h>

char* rot13(const char* src){
    int ile_do_konca;
    int od_pocz;
    int i = 0;
    int size = 0;
    while (src[i] != '\0') {
        size++;
        i++;
    }
    i = 0;
    char* ans = (char*)malloc(sizeof(char) * size + 1);

    while (src[i]!= '\0') {
        if (isalpha(src[i])) {
            if ((isupper(src[i])) && src[i] + 13 > 90) {
                ile_do_konca = abs(90-src[i]);
                od_pocz = 13 - ile_do_konca-1;
                ans[i] = 65 + od_pocz;
            }
            else if (islower(src[i]) && src[i]+13>122) {
                ile_do_konca = abs(122-src[i]);
                od_pocz = 13 - ile_do_konca-1;
                ans[i] = 97 + od_pocz;
            }
            else {
                ans[i] = src[i] + 13;
            }
        }
        else{
        ans[i]=src[i];
        }
        i++;
    }
    ans[i] = '\0';

    return ans;
}
