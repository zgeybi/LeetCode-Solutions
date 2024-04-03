class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0) {
            return 0;
        }
        unordered_set<char> substring;
        int max_length = 0;
        int i = 0;
        int j = 0;
        while (i < s.length()) {
            char character = s[i];
            while (substring.find(character) != substring.end()) {
                substring.erase(s[j]);
                ++j;
            }
            substring.insert(character);
            max_length = max(max_length, i - j + 1);
            ++i;
        }
        return max_length;
    }
};
