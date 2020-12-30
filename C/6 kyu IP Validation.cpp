#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/* Note: allocate memory yourself */
/* return NULL in case num == 0 */
int is_valid_ip(const char addr[]) {
  int tmp = 0, index_count = 0,tmp_sum=0, size = strlen(addr),count_of_dots=0;
  int index = 0;
  if (!(isdigit(addr[index]))) return 0;
  while (index < size) {
    if (index == size - 1 && isdigit(addr[index]) && count_of_dots==3) return 1;
    for (index_count = index, tmp = 0; addr[index] != '.' && tmp < 3; tmp++, index++) {
      if( addr[index-1] == '.' && addr[index]=='0') return 0;
      else if (index == size - 1 && isdigit(addr[index]) && count_of_dots==3) return 1;
      if (!(isdigit(addr[index]))) return 0;
    }
    if (addr[index]=='.') count_of_dots++;
    if (count_of_dots>3) return 0;
    index++;
    tmp_sum=0;
    while (tmp > 0) {
      tmp_sum +=(addr[index_count]-'0')*pow(10,tmp-1);
      printf(" %d %d",addr[index_count]-'0',tmp_sum);
      index_count++;
      tmp--;
    }
    if (tmp_sum > 255 || tmp_sum < 0) return 0;

  }
  return 0;
}
  
