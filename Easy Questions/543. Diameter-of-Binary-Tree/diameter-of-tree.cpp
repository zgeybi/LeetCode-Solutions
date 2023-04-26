
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
  int subtree_height = 0;
  int Depth(TreeNode *root) {
    if (!root) {
      return 0;
    }
    int left_height = Depth(root->left);
    int right_height = Depth(root->right);
    subtree_height = subtree_height > (left_height + right_height + 1)
                         ? subtree_height
                         : (left_height + right_height + 1);
    return left_height > right_height ? left_height + 1 : right_height + 1;
  }
  int diameterOfBinaryTree(TreeNode *root) {
    Depth(root);
    return subtree_height - 1;
  }
};