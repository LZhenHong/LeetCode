int countNegatives(int **grid, int gridRowSize, int *gridColSize) {
	int count = 0;
	for (int i = 0; i < gridRowSize; ++i) {
		for (int j = 0; j < *gridColSize; ++j) {
			if (grid[i][j] < 0) {
				count += *gridColSize - j;
				break;
			}
		}
	}
	return count;
}
