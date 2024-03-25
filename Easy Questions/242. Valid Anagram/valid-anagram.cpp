class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        int s1[256] = {0};
        int t1[256] = {0};
        int size = s.length();
        for (int i = 0; i < size; i++) {
            s1[s[i]]++;
            t1[t[i]]++;
        }
        for (int i = 0; i < 256; i++) {
            if (s1[i] != t1[i]) {
                return false;
            }
        }
        return true;
    }
};
