class Solution {
public:
    bool BinarySearch(vector<int>& nums, int start, int end, int target) {
        if (start >= end) {
            return nums[start] == target;
        }
        int med = (start + end) / 2;
        if (nums[med] == target) {
            return true;
        } 
        else if (nums[med] > target) {
            return BinarySearch(nums, start, med - 1, target);
        } 
        else if (nums[med] < target){
            return BinarySearch(nums, med + 1, end, target);
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int size = matrix[0].size() - 1;
        for (auto nums : matrix) {
            if (BinarySearch(nums, 0, size, target)) {
                return true;
            }
        }
        return false;
    }
};
