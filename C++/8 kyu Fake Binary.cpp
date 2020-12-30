#include <string>

std::string fakeBin(std::string str){
  int i=0;
  while(str.length()>i){
    if(str[i]>='5') str[i]='1';
    else if(str[i]<'5') str[i]='0';
    i++;
  }
  return str;
}
