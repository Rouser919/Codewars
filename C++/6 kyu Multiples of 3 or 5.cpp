int solution(int number) {
  if(number<0) return 0;
     int sum = 0, i = 1;
    while (i < number) {
        if (i % 3 == 0 || i % 5 == 0) sum += i;
        i++;
    }
  return sum;

}
