
//  Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode* left, TreeNode* right)
      : val(x), left(left), right(right) {}
};

class Solution {
 public:
  TreeNode* sortedArrayToBST(vector<int>& nums) {
    TreeNode* root = sortedArrayToBST(nums, 0, nums.size());
    return root;
  }
  TreeNode* sortedArrayToBST(vector<int>& nums, int head, int tail) {
    if (tail - head <= 0) {
      return nullptr;
    }
    TreeNode* node = new TreeNode(nums[(head + tail) / 2]);
    node->left = sortedArrayToBST(nums, head, (tail + head) / 2);
    node->right = sortedArrayToBST(nums, (tail + head) / 2 + 1, tail);
    return node;
  }
};