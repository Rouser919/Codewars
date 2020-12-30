#include <stdbool.h>
bool five(int count){
count=abs(count);
while(count>0){
if (count%10==5 || count%10==-5) return true;
count/=10;
}
return false;
}
int dontGiveMeFive(int start, int end){
  int sum=0;
  while( start<=end){
     if(five(start)){
        start++;
        continue;
     }
     start++;
     sum++;
    }
    printf("%d",sum);
  return sum;
}
