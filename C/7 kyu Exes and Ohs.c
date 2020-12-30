#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>

bool xo (const char* str){
  int i=0,tmpx=0,tmpo=0;
  while (str[i]!='\0'){
    if(tolower(str[i])=='o') tmpx++;
    else if(tolower(str[i])=='x')tmpo++;
    i++;
  }
  if (tmpx==tmpo) return true;
  return false;
}
