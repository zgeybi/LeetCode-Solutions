class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    vector<int> ans;
    int size = nums.size();
    for (int i = 0; i < size; i++) {
      bool found = false;
      for (int j = 0; j < ans.size(); j++) {
        if (nums[i] == ans[j]) {
          found = true;
          break;
        } else {
          continue;
        }
      }
      if (found == true) {
        continue;
      } else {
        ans.push_back(nums[i]);
      }
    }

    nums.clear();
    for (int i = 0; i < ans.size(); i++) {
      nums.push_back(ans[i]);
    }

    return ans.size();
  }
};