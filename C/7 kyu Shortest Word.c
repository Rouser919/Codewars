#include <sys/types.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int find_short(const char *s){
  int min=10,i=0,tmp=0,tmp_min=0;
  while(tmp==0){
    while(isalpha(s[i])){
      i++;
      tmp_min++;
    }
    if(isspace(s[i])) i++;
    if (tmp_min<min){
      min=tmp_min;
    }
    tmp_min=0;
    if(s[i]==0) return min;
  }
}
