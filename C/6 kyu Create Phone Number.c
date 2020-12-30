char *create_phone_number(char phnum[15], const unsigned char nums[10]){
  phnum[0]='(';
  phnum[4]=')';
  phnum[5]=' ';
  phnum[9]='-'; 
  printf("%c",phnum[0]);
  int i=1,t=0;
  while (t<10){
    if((i>0 && i<4) || (i>5 && i<9) || (i>9 && i<14) ){
      phnum[i]=nums[t]+48;
      i++;
      t++;
      printf("%c",phnum[i-1]);
      continue;
    }
    i++;  
  }
    return phnum;
}
