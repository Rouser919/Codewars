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
  printf("%d",count);
  return true;
}
int minimumNumber(int numbers[], int count){
  int i=0;
  long sum=0;
  long nextprime;
  while (i<count){
    sum+=numbers[i++];
  }
  nextprime=sum;
  while (!(isprime(nextprime))){
    nextprime++;
  }
  return nextprime-sum;

}
