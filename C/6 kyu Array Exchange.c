#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

void strxchg(char* s1, char* s2){
    char size_s1 = strlen(s1), size_s2 = strlen(s2);
    char* s1_s2 = (char*)malloc(sizeof(char) * (size_s1 + 1));
    char* s2_s1 = (char*)malloc(sizeof(char) * (size_s2 + 1));
    int i = 0;
    int tmp_s2 = size_s2;
    while (i < size_s2) {
        s2_s1[i] = s2[tmp_s2-1];
        tmp_s2--;
        i++;
    }
    s2_s1[i] = '\0';
    i = 0;
    int tmp_s1 = size_s1;
    while (i < size_s1) {
        s1_s2[i] = s1[tmp_s1-1];
        i++;
        tmp_s1--;
    }
    s1_s2[i] = '\0';
    memcpy(s2, s1_s2, size_s1 + 1);
    memcpy(s1, s2_s1, size_s2 + 1);
    free(s1_s2);
    free(s2_s1);
    s1_s2 = NULL;
    s2_s1 = NULL;
}
