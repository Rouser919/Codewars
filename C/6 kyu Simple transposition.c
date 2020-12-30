char *simple_transposition(const char *s){
  int n=strlen(s);
  char *ans=(char*)malloc(n+1);
  int i=0;
  int g=0;
  while (i<n){
    ans[g]=s[i];
    i+=2;
    g++;
  }
  i=1;
  while (i<n){
    ans[g]=s[i];
    i+=2;
    g++;
  }
  ans[n]='\0';
  
    return ans;
}
