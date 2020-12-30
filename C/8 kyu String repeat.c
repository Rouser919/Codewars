#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


char *repeat_str(size_t count, const char *src) {
  int i=0,ik=0,s=strlen(src);
  char *ans=(char*)malloc(sizeof(char)*count*s);
  while(i<s*count){
    for(ik=0;ik<s;ik++){
      ans[i]=src[ik];
      i++;
    }
  }
  ans[i]='\0';
  return ans;
}
