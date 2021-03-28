int maximumWealth(int **accounts, int accountsSize, int *accountsColSize) {
    int wealth = 0;
    int temp = 0;
    for (int i = 0; i < accountsSize; ++i) {
        temp = 0;
        int colSize = accountsColSize[i];
        for (int j = 0; j < colSize; ++j) {
            temp += accounts[i][j];
        }
        if (temp > wealth) {
            wealth = temp;
        }
    }
    return wealth;
}