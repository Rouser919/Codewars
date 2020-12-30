#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
bool isprime(long long count){
  int i=2;
  int tmp=0;
  while (i*i<=count){
    if (count%i==0) tmp++;
    if (tmp>0) return false;
        i++;
  }
  return true;
}
unsigned long long num_primorial(unsigned n){
  unsigned long long sum=1;
  int i=2;
  while (n>0){
    if(isprime(i)){
      n--;
      sum*=i;
    }
    i++;
  }
    return sum; // Do your magic!
}
