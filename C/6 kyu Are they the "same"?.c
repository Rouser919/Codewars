#include <stdbool.h>
#include <stdlib.h>

bool comp(const int *a, const int *b, size_t n){
  int i=0;
  int ik=0,tmp=0,tmp_v;
  while (i<n){
    for(tmp=0,ik=0;ik<n;ik++){
      if(a[ik]==sqrt(b[i])){
        tmp++;
      }
    }
    tmp_v=0;
    if (tmp>0){
      ik=0;
      while(ik<n){
        if(b[ik]==b[i]) tmp_v++;
        ik++;
      }
      if (tmp_v!=tmp) return false;
    }
    if (tmp==0) return false;
    i++;
  }
  
    return true;
}
