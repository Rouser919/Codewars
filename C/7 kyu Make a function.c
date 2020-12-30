double arithmetic(double a, double b, char *s) {
  if (s[0]=='a') return a+b;
  else if (s[0]=='s') return a-b;
  if (s[0]=='m') return a*b;
  else if (s[0]=='d') return a/b;
}
