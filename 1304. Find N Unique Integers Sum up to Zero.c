int *sumZero(int n, int *returnSize) {
	*returnSize = n;
	int *result = (int *)malloc(sizeof(int) * n);
	if (n % 2 == 1) {
		result[n - 1] = 0;
	}
	int length = n / 2;
	for (int i = 0; i < length; ++i) {
		result[2 * i] = -(i + 1);
		result[2 * i + 1] = (i + 1);
	}
	return result;
}