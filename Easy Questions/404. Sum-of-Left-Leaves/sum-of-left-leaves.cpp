//  Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
 public:
  int sum = 0;
  int sumOfLeftLeaves(TreeNode *root) {
    if (!root) {
      return 0;
    }
    if (root->left) {
      if (root->left->right == nullptr && root->left->left == nullptr) {
        sum += (root->left) ? root->left->val : 0;
      }
    }

    int right_child = sumOfLeftLeaves(root->right);
    int left_child = sumOfLeftLeaves(root->left);
    return sum;
  }
};
