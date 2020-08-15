int *shuffle(int *nums, int numsSize, int n, int *returnSize) {
    int *shuffleNums = (int *)malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    for (int i = 0; i < n; ++i) {
        shuffleNums[2 * i] = nums[i];
        shuffleNums[2 * i + 1] = nums[n + i];
    }
    return shuffleNums;
}
