class Solution {
 public:
  int maxArea(vector<int>& height) {
    long left = 0;
    long right = height.size() - 1;
    long max_area = 0;
    while (left < right) {
      if (height[left] <= height[right]) {
        if ((right - left) * height[left] > max_area) {
          max_area = (right - left) * height[left];
        }
        left++;
      } else {
        if ((right - left) * height[right] > max_area) {
          max_area = (right - left) * height[right];
        }
        right--;
      }
    }
    return max_area;
  }
};