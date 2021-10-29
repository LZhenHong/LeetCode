#include <stdio.h>
#include <stdbool.h>

/**
* Definition for a binary tree node.
*/
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool isSameTree(struct TreeNode *p, struct TreeNode *q) {
	if (!p && !q) {
		return true;
	}
	
	if ((p && !q) || (!p && q) || p->val != q->val) {
		return false;
	}
	
	if (!isSameTree(p->left, q->left)) {
		return false;
	}
	
	if (!isSameTree(p->right, q->right)) {
		return false;
	}
	
	return true;
}
