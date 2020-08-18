int xorOperation(int n, int start) {
	int *nums = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; ++i) {
		nums[i] = start + 2 * i;
	}
	int res = 0;
	for (int i = 0; i < n; ++i) {
		res ^= nums[i];
	}
	free(nums);
	return res;
}
