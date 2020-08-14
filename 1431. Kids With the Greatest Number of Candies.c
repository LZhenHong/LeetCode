bool *kidsWithCandies(int *candies, int candiesSize, int extraCandies, int *returnSize) {
    bool *resArray = (bool *)malloc(sizeof(bool) * candiesSize);
    *returnSize = candiesSize;
    int maxCandies = 0;
    for (int i = 0; i < candiesSize; ++i) {
        if (candies[i] > maxCandies) {
            maxCandies = candies[i];
        }
    }
    for (int i = 0; i < candiesSize; ++i) {
        resArray[i] = candies[i] + extraCandies >= maxCandies;
    }
    return resArray;
}
