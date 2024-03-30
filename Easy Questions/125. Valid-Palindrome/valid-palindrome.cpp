class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0; i < s.length(); i++) {
            if(s[i] <= 'Z' && s[i] >= 'A') {
                s[i] = s[i] - ('Z' - 'z');
            }
        }
        string res;
        for (char s1 : s) {
            if (s1 >= 'a' && s1 <= 'z' || s1 <= '9' && s1 >= '0') {
                res += s1;
            }
        }
        for (int i = 0, j = res.length() - 1; i <= j;) {
            if (res[i] == res[j]) {
                i++;
                j--;
                continue;
            }else {
                return false;
            }
        }
        return true;
    }
};
