char *alphabet_position(char *text) {
  int N = strlen(text);
  char *ret = calloc(2*N+2,1);
  for(int i = 0; i < N; i++)
      {
      char check = tolower(text[i]);
      int t = check - 96;
      if (t > 0)
        {
        char copy[2];
        sprintf(copy,"%d",t);
        strcat(ret,copy);
        }
      if (i < N-1)
        {
        char forwardCheck = tolower(text[i+1]);
        int s = forwardCheck - 96;
        if (s > 0) strcat(ret, " ");
        }
      }
  return ret;
}
