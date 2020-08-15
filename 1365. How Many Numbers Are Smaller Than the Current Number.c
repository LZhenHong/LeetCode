int *smallerNumbersThanCurrent(int *nums, int numsSize, int *returnSize) {
	int *resNums = (int *)malloc(sizeof(int) * numsSize);
	memset(resNums, 0, sizeof(int) * numsSize);
	*returnSize = numsSize;
	for (int i = 0; i < numsSize; ++i) {
		for (int j = 0; j < numsSize; ++j) {
			if (nums[j] < nums[i]) {
				++resNums[i];
			}
		}
	}
	return resNums;
}
