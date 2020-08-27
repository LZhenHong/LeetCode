int findNumbers(int *nums, int numsSize) {
	int numbers = 0;
	for (int i = 0; i < numsSize; ++i) {
		if (nums[i] < 10) {
			continue;
		} else if (nums[i] < 100) {
			++numbers;
		} else if (nums[i] < 1000) {
			continue;
		} else if (nums[i] < 10000) {
			++numbers;
		} else if (nums[i] < 100000) {
			continue;
		} else {
			++numbers;
		}
	}
	return numbers;
}