int *runningSum(int *nums, int numsSize, int *returnSize) {
    int *returnNums = (int *)malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    int pre = 0;
    for (int i = 0; i < numsSize; ++i) {
        int num = nums[i];
        returnNums[i] = pre + num;
        pre = returnNums[i];
    }
    return returnNums;
}
