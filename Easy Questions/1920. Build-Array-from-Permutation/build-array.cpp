class Solution {
 public:
  vector<int> buildArray(vector<int>& nums) {
    vector<int> ans(nums.size());
    int size = nums.size();
    for (int i = 0; i < size; i++) {
      ans[i] = nums[nums[i]];
    }
    return ans;
  }
};