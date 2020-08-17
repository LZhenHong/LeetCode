int subtractProductAndSum(int n) {
	int addNum = 0;
	int multiplyNum = 1;
	int digit = 0;
	while (n != 0) {
		digit = n % 10;
		addNum += digit;
		multiplyNum *= digit;
		n = n / 10;
	}
	return multiplyNum - addNum;
}
