long long rowSumOddNumbers(unsigned n) {
    long long sum = 0;
    int count_of_number = ((1 + n-1) * (n-1)) / 2;
    int value =  count_of_number * 2-1+2;
    int index = 0;
    while (index < n) {
        sum += value;
        value += 2;
        index++;
    }
    return sum;

}
