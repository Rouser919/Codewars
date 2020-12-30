#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int* ary_take(const int* ary, size_t ary_size, size_t n, size_t* res_size){
    if (n == 0) {
        *res_size = 0;
        return NULL;
    }
    if (n >= ary_size) {
        *res_size = ary_size;
    }
    else if (n < ary_size) {
        *res_size = n;
    }
    int* ans = (int*)malloc(sizeof(int) * (*res_size + 1));
    int i = 0;
    while (i < *res_size) {
        ans[i] = ary[i];
        i++;
    }
    ans[i] = '\0';
    return ans;

}
