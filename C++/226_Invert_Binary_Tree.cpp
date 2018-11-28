/* Invert a binary tree.
 *Example:
 * 
 * Input:
 * 
 *      4
 *    /   \
 *   2     7
 *  / \   / \
 * 1   3 6   9
 *
 * Output:
 * 
 *      4
 *    /   \
 *   7     2
 *  / \   / \
 * 9   6 3   1
 */
#include <iostream>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
	public:
		TreeNode* invertTree(TreeNode* root){
			if (!root) return root;
			swap(root->left, root->right);
			invertTree(root->left);
			invertTree(root->right);
			return root;
		}
};
