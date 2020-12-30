#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

bool read_commands(const char* commands){
  int tmp=1,index=0;
  while(commands[index]=='1' || commands[index]=='0'){
    if (tmp==1 && commands[index]=='1') tmp=2;
    else if(tmp==1 && commands[index]=='0') tmp=1;
    else{
      if (tmp==2 && commands[index]=='0') tmp=3;
      else if (tmp==2 && commands[index]=='1') tmp=2;
      else{
        if(tmp==3 &&(commands[index]=='1' || commands[index]=='0')) tmp=2;
      }
    }
    index++;
  }
  if (tmp==2) return true;
  return false;
}
