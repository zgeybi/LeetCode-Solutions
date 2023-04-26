
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
  int maxDepth(TreeNode *root) {
    int counter = 0;
    return maxDepth(root, counter);
  }

  int maxDepth(TreeNode *root, int counter) {
    counter++;
    if (!root) {
      return 0;
    }
    if (root->left == nullptr && root->right == nullptr) {
      return counter;
    } else if (root->left == nullptr) {
      return maxDepth(root->right, counter);
    } else if (root->right == nullptr) {
      return maxDepth(root->left, counter);
    } else {
      int count1 = maxDepth(root->left, counter);
      int count2 = maxDepth(root->right, counter);
      return count1 > count2 ? count1 : count2;
    }
  }
};