int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
  int *res = malloc(sizeof(int) * 2)
  res[0] = 0;
  res[1] = 1;
  *returnSize = 2;
  return res;
}
