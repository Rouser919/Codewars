int findSum (int n){
  int tmp=0,i=0;
  for (i=0;i<=n;i++){
    if(i%3==0 || i%5==0){
      tmp+=i;
    }
  }
  return tmp;
}
