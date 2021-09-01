#include <stdlib.h>
#include <stdbool.h>

int *plusOne(int *digits, int digitsSize, int *returnSize) {
	bool isAllNine = false;
	for (int i = 0; i < digitsSize; ++i) {
		isAllNine = digits[i] == 9;
		if (!isAllNine) {
			break;
		}
	}
	
	*returnSize = isAllNine ? (digitsSize + 1) : digitsSize;
	int *result = (int * )malloc(sizeof(int) * (*returnSize));
	int num = 1;
	int index = *returnSize - 1;
	for (int i = digitsSize - 1; i >= 0; --i) {
		int digit = digits[i];
		int sum = digit + num;
		if (sum >= 10) {
			sum %= 10;
			num = 1;
		} else {
			num = 0;
		}
		result[index] = sum;
		--index;
	}
	
	if (num > 0) {
		result[0] = num;
	}
	
	return result;
}
