class Solution {
 public:
  double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int size1 = nums1.size();
    int size2 = nums2.size();
    vector<double> result;
    for (int i = 0, j = 0; i < size1 || j < size2;) {
      if (i >= size1 && j < size2) {
        for (; j < size2; j++) {
          result.push_back(nums2[j]);
        }
        break;
      } else if (j >= size2 && i < size1) {
        for (; i < size1; i++) {
          result.push_back(nums1[i]);
        }
        break;
      }
      if (nums1[i] >= nums2[j]) {
        result.push_back(nums2[j]);
        j++;
        continue;
      } else {
        result.push_back(nums1[i]);
        i++;
        continue;
      }
    }
    if ((size1 + size2) % 2 != 0) {
      return result[(size1 + size2 - 1) / 2];
    } else {
      double med = (result[(size1 + size2 - 1) / 2] +
                    result[((size1 + size2 - 1) / 2) + 1]) /
                   2;
      return med;
    }
  }
};