#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

void omit_hashtag(char* message, const char* hashtag){
  int s=strlen(message),s_h=strlen(hashtag);
  int i=0,control=0,tmp;
  while (i<s){
    if (message[i]==hashtag[0] && (message[i+1]==hashtag[1])){
        tmp=0;
        control=i;
      while(message[control]==hashtag[tmp]){
        tmp++;
        control++;
      }
      if (tmp==s_h){
         break;
          }
      }
      i++;
    }
  while(i<s-s_h){
    message[i]=message[i+s_h];
    i++;
  }
  message[i]='\0';
  // TODO: implement this function
}
