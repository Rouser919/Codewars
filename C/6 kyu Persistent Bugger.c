#include <stdlib.h>
int rec_persisentce(int n) {
    int size = 0;
    int tmp = n;
    while (tmp > 0) {
        tmp /= 10;
        size++;
    }
    int* ans = (int*)malloc(sizeof(int) * (size));
    tmp = size;
    tmp--;
    while (tmp >= 0) {
        ans[tmp] = n % 10;
        n /= 10;
        tmp--;
    }
    tmp = 0;
    n = 1;
    while (tmp < size) {
        n *= ans[tmp];
        tmp++;
    }
    free(ans);
    return n;
}
int persistence(int n) {
    int counter = 0;

    while (n > 9) {
        n = rec_persisentce(n);
        counter++;
    }
    return counter;
}
