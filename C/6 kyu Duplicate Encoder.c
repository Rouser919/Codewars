char *DuplicateEncoder(char *s ){
  int i=0,i_z=0,tmp;
  int x=strlen(s)+1;
  char  *g=(char*)malloc(sizeof(char)*x);
  while (s[i]!=0){
    for(tmp=0,i_z=0;s[i_z]!=0;i_z++){
      if (tolower(s[i])==tolower(s[i_z] ))  tmp++;
    }
    if (tmp>=2){
        g[i]=')';
    }
    else if(tmp<2){
      g[i]='(';
    }
    i++;
  }
  g[i]='\0';
  return g;
}
