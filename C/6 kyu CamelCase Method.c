#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

char *camel_case(const char *s){
  short punct=0;
  short i=0,abc=strlen(s),i_ans=0;
  while (s[i]!='\0'){
    if (!(isalpha(s[i]))) punct++;
    i++;
  }
  
  char *ans=(char*)malloc(sizeof(char)*(abc-punct+1));
  i=0;
  
  while (i<abc){
    if(!(isalpha(s[i]))){
      i++;
      continue;
    } 
    if (isalpha(s[i]) && !(isalpha(s[i-1]))){
       ans[i_ans]=toupper(s[i]);
       i_ans++;
       i++;
       continue;
    }
    else if (isalpha(s[i]) && isalpha(s[i-1])){
      ans[i_ans]=s[i];
      i_ans++;
      i++;
      
    }
    
     
  }
  ans[i_ans]='\0';
  i_ans=0;
  while(i_ans<abc-punct){
    printf("%c",ans[i_ans++]);
  }
    return ans;
}
