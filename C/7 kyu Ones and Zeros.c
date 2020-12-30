#include <stddef.h>
unsigned binary_array_to_numbers(const unsigned* bits, size_t count) {
    int index = 0;
    int deggre = count - 1;
    unsigned int sum=0;
    while (index < count) {
        if (bits[index] == 1) {
            sum += pow(2, deggre);
        }
        index++;
        deggre--;
    }
    return sum;

}
