class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> s1;
        unordered_map<char, int> t1;
        for (int i = 0; i < s.length(); i++){
            if (s1.find(s[i]) == s1.end()) {
                s1.insert({s[i], 1});
            } else {
                int j = s1.at(s[i]);
                s1.at(s[i]) = ++j;
            }
            if (t1.find(t[i]) == t1.end()) {
                t1.insert({t[i], 1});
            } else {
                int j = t1.at(t[i]);
                t1.at(t[i]) = ++j;
            }
        }
        for (auto& k: s1){
            if (t1.find(k.first) == t1.end() || t1.at(k.first) != k.second) {
                return false;
            }
        }
        for (auto& k: t1){
            if (s1.find(k.first) == s1.end() || s1.at(k.first) != k.second) {
                return false;
            }
        }
        return true;
    }
};
