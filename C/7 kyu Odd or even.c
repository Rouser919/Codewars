#include <stddef.h>
#include <stdio.h>
const char *odd_or_even(const int *v, size_t sz) {
  int sum=0;
  int i=0;
  while (i<sz){
  sum+=v[i];
  i++;
  }
  char *even={"even"};
  char *odd={"odd"};
  if (sum%2==0){
    printf("even"); 
  return even;
  }
  else if (sum%2==1) printf("odd"); return odd;
  return NULL;
}
