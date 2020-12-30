#include <stddef.h>
#include <stdlib.h>
int find_longest(int *numbers, size_t numbers_size){
  int i=0,i_most,g;
  long int tmp=0,digits=0,final=0;
  while (i<numbers_size){
    g=abs(numbers[i]);
    digits=0;
    while(g>0){
      g/=10;
      digits++;
    }
    if (digits>final){
      final=digits;
      i_most=i;
    }
    i++;
  }
    return numbers[i_most];
}
