class Solution {
 public:
  int removeElement(vector<int>& nums, int val) {
    auto it = remove(nums.begin(), nums.end(), val);

    return distance(nums.begin(), it);
  }
};