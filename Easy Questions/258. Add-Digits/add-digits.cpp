class Solution {
 public:
  int addDigits(int num) {
    if (num < 10) {
      return num;
    }
    int sum = 0;
    while (num != 0) {
      sum += num % 10;
      num /= 10;
      if (num == 0 && sum >= 10) {
        num = sum;
        sum = 0;
      }
    }
    return sum;
  }
};