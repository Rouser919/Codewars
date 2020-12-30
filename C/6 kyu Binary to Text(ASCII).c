#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
int binary_to_int(char *s,int max){
  int i=0,sum=0;
  while (i<8){
    sum+=pow(2,max)*(s[i]-48);
    i++;
    max--;
  }
  return sum;
}

char *binary_to_string(const char *binary) {
  char *ans=(char*)malloc(sizeof(char)*8+1);
  short s=strlen(binary);
  char *ascii=(char*)malloc(sizeof(char)*(ceil(s/8)));
  short i=0,convert=0,index_ascii=0;
  while (i<s){
    for(convert=0;convert<8 && binary[i]!='\0';convert++,i++){
      ans[convert]=binary[i];
    }
    ans[convert]='\0';
    ascii[index_ascii]=binary_to_int(ans,convert-1);
    printf("%c",ascii[index_ascii]);
    index_ascii++;
  }
  ascii[index_ascii]='\0';
    return ascii;
}
