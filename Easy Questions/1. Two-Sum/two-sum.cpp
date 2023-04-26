class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    int size = nums.size();
    for (int i = 0; i < size; i++) {
      for (int j = 1; j < size; j++) {
        if (nums[i] + nums[j] == target && i != j) {
          result.push_back(i);
          result.push_back(j);
          return result;
        } else {
          continue;
        }
      }
    }

    return result;
  }
};