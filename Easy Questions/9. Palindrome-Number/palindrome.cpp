class Solution {
 public:
  bool isPalindrome(int x) {
    string str = to_string(x);
    int len = str.size();
    bool flag = false;
    char arr[len];

    for (int i = 0; i < len; i++) {
      arr[len - i - 1] = str[i];
    }

    for (int i = 0; i < len; i++) {
      if (arr[i] == str[i]) {
        flag = true;
      } else {
        flag = false;
        break;
      }
    }

    return flag;
  }
};