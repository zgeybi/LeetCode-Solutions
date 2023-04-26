class Solution {
 public:
  int reverse(int x) {
    long b = 0;
    while (x != 0) {
      b = b * 10 + (x % 10);
      x /= 10;
    }
    if (b > INT_MAX || b < INT_MIN) {
      return 0;
    }
    return b;
  }
};