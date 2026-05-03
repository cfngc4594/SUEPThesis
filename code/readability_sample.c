int *twoSum(int *a, int n, int t, int *r) {
  int i = 0;
  for (; i < n; i++) {
    int j = i + 1;
    for (; j < n; j++) {
      if (a[i] + a[j] == t) {
        int *x = malloc(sizeof(int) * 2);
        x[0] = i;
        x[1] = j;
        *r = 2;
        return x;
      }
    }
  }
  *r = 0;
  return malloc(0);
}
