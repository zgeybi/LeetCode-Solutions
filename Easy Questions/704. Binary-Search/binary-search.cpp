class Solution {
public:
    int BinarySearch(vector<int>& nums, int start, int end, int target) {
        if (start >= end) {
            return nums[start] == target ? start : -1;
        }
        int med = (start + end) / 2;
        if (nums[med] == target) {
            return med;
        } 
        else if (nums[med] > target) {
            return BinarySearch(nums, start, med - 1, target);
        } 
        else if (nums[med] < target){
            return BinarySearch(nums, med + 1, end, target);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        return BinarySearch(nums, 0, nums.size() - 1, target);
    }
};
