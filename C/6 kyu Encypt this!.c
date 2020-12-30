#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *swap(char *s) {
  char temp;
  int end;
  if (strlen(s) > 2) {
    end = strlen(s) - 1;
    temp = s[1];
    s[1] = s[end];
    s[end] = temp;
  }
  return s;
}

char *encrypt_this(const char *str){
  int size = 0;
  char *result = malloc(1);
  char *s = malloc(strlen(str) + 1);
  memcpy(s, str, strlen(str) + 1);
  char *p;
  result[0] = '\0'; 
  if (strlen(str) != 0) {
    p = strtok(s, " ");  
    while (p != NULL) {
      p = swap(p);
      result = realloc(result, size + strlen(p) + 5);
      sprintf(result + size, "%d%s ", p[0], ++p); 
      size = strlen(result);
      p = strtok(NULL, " ");
    }
    
    result = realloc(result, size);
    result[size - 1] = '\0';
  }  
  free(s);
  return result;
}
