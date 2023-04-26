class Solution {
 public:
  int mySqrt(int x) {
    long i = 1;
    if ((i * i) == x) return 1;

    long y = 1;
    while (y <= x) {
      i++;
      y = i * i;
    }

    return (int)i - 1;
  }
};