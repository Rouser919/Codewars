#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char* pattern(const int n){
  char *res = calloc(n * (n+1) + n, sizeof(char));
  int i = 0, j = 0;
  for( ; i < n; ++i) {
    char tmp[10];
    sprintf(tmp, "%d", i+1);
    for(j = 0; j < i+1; ++j) {
      strncat(res, tmp, strlen(tmp));
    }
    if(i != n - 1) strcat(res, "\n");
  }
  return res;
}
