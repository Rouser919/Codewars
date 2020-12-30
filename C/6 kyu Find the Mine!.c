#include <stdlib.h>
#include <stdio.h>
size_t *mine_location(size_t n, int field[n][n]){
  int i_p,i_k;
  size_t *ans=malloc(sizeof( unsigned int)*2);
  for(i_p=0;i_p<n;i_p++){
    for (i_k=0;i_k<n;i_k++){
      if (field[i_p][i_k]==1){
          ans[0]=i_p;
          ans[1]=i_k;
          return ans;
        
      }
    }
  }
}
