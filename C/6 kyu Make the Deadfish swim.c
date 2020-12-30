#include <stdlib.h>
int* parse(char* program){
    int counter = 0;
    int index = 0;
    int sum = 0;
    int* arr = (int*)malloc(sizeof(int)*2);
    while (program[index] != '\0') {
        switch (program[index]) {
        case 'i':
            sum++;
            break;
        case 'd':
            sum--;
            break;
        case 's':
            sum *= sum;
            break;
        case 'o':
            if (counter >= 1) {
                arr=realloc(arr,sizeof(int)* (counter + 2));
                arr[counter] = sum;
            }
            else {
                arr[counter] = sum;
            }
            counter++;
            break;
        default:
            break;
        }
        index++;
    }
    arr[counter] = '\0';
    return arr;
