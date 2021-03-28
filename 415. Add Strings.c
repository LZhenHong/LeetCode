#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *addStrings(char *num1, char *num2) {
	int length1 = strlen(num1);
	int length2 = strlen(num2);
	int length = length1 > length2 ? length1 : length2;
	++length;
	char *res = (char *)malloc(sizeof(char) * (length + 1));
	memset(res, '0', length + 1);
	for (int i = 0; i < length; ++i) {
		int index1 = length1 - 1 - i;
		int index2 = length2 - 1 - i;
		
		int char1 = index1 < 0 ? 0 : num1[index1] - '0';
		int char2 = index2 < 0 ? 0 : num2[index2] - '0';
		int sum = char1 + char2 + res[length - i - 1] - '0';
		if (sum > 9) {
			res[length - i - 1] = sum - 10 + '0';
			res[length - i - 2] = '1';
		} else {
			res[length - i - 1] = sum + '0';
		}
	}
	res[length] = '\0';
	
	if (res[0] <= '0') {
		return res + 1;
	}
	return res;
}
