#include <stdio.h>
#include <math.h>
#include <stdlib.h>
long long findNb(long long m){
  long long control=0;
  int i,tmp_i;
  i=1;
  while(control<m){
    control+=pow(i,3);
    if(control==m){
      return i;
    }
    i++;
  }
   return -1;
}
