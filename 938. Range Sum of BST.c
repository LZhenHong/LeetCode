int rangeSumBST(struct TreeNode *root, int L, int R) {
	if (!root) {
		return 0;
	}

	int sum = 0;
	if (root->val >= L && root->val <= R) {
		sum += root->val;
	}

	int sumL = rangeSumBST(root->left, L, R);
	int sumR = rangeSumBST(root->right, L, R);

	return sum + sumL + sumR;
}