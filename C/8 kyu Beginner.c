#include <stddef.h>

// return a *new, dynamically allocated* array with each element doubled.
int *maps(const int *arr, size_t size){
int *new=(int*)malloc(sizeof(int)*size+1);
int i=0;
while(i<size){
new[i]=2*arr[i];
i++;
}
return new;
}
