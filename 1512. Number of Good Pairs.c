int numIdenticalPairs(int *nums, int numsSize) {
    int res = 0;
    // 最后一个数字肯定没有匹配，无需遍历
    for (int i = 0; i < numsSize - 1; ++i) {
        for (int j = i + 1; j < numsSize; ++j) {
            if (nums[i] == nums[j]) {
                ++res;
            }
        }
    }
    return res;
}
