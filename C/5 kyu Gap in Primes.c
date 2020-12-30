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
long long* gap(int g, long long m, long long n) {
  long long *back=(long long*)malloc(sizeof(long long)*2);
  long long tmp;
  back[0]=0;
  back[1]=0;
  while (!(isprime(m))){
    m++;
  }
  tmp=m;
  while (m<n){
    if (isprime(m) && m-tmp==g){
      back[0]=tmp;
      back[1]=m;
      return back;
    }
    else if (isprime(m)) tmp=m;
        m++;
  }
  return back;
  // your code
}
