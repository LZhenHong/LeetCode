int *decompressRLElist(int *nums, int numsSize, int *returnSize) {
	int halfSize = numsSize / 2;
	int freq = 0;
	int val = 0;
	int tempCount = 0;
	int *resNums = NULL;
	*returnSize = 0;
	for (int i = 0; i < halfSize; ++i) {
		freq = nums[2 * i];
		val = nums[2 * i + 1];
		tempCount = *returnSize + freq;
		if (resNums == NULL) {
			resNums = (int *)malloc(sizeof(int) * freq);
		} else {
			resNums = (int *)realloc(resNums, sizeof(int) * tempCount);
		}
		for (int j = *returnSize; j < tempCount; ++j) {
			resNums[j] = val;
		}
		*returnSize = tempCount;
	}
	return resNums;
}
