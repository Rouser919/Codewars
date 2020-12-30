int get_sum(int a, int b) {
    if (a == b) return a;
    int sum = 0;
    if (a < b) {
        while (a != b) {
            sum += a;
            a++;
        }
        sum += a;
    }
        if (b < a) {
            while (b != a) {
                sum += b;
                b++;
            }
            sum += b;
        }
    return sum;
}
