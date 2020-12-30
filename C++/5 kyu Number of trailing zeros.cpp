long zeros(long n) {
    long sum_of_zeros = 0;
    long i = 5;
    while (n / i >= 1) {
        sum_of_zeros += n / i;
        i *= 5;
    }
 
    return sum_of_zeros;
}
