include <string.h>
#include <ctype.h>

char *to_alternating_case(const char *s) {
  size_t sz = strlen(s) + 1;
  char *result = malloc(sizeof(char) * sz);
  
  for (int i = 0; i < sz; ++i) {
    if (islower(s[i])) result[i] = toupper(s[i]);
    else result[i] = tolower(s[i]);
  }
  
  return result;
}
