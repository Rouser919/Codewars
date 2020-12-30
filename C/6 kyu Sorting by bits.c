int bits(int n) {
  int r = 0;
  while (n) {
    r++;
    n &= n - 1;
  }
  return r;
}

int cmp(const void *a_ptr, const void *b_ptr) {
  int a = *(int *)a_ptr;
  int b = *(int *)b_ptr;
  int d = bits(a) - bits(b);
  return d != 0 ? d : (a < b ? -1 : a == b ? 0 : 1);
}

void sort_by_bit(int *arr, int arrLength) {
  qsort(arr, arrLength, sizeof(int), cmp);
}
