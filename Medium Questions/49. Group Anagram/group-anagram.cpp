class Solution {
public:
    bool isAnagram(string s, string t) {
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
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int size = strs.size();
        vector<vector<string>> result;
        vector<int> skipped_indices(size, 0);
        sort(strs.begin(), strs.end(), []
                (const std::string& first, const std::string& second){
                    return first.size() < second.size();});
        for (int i = 0; i < size; i++) {
            if (skipped_indices[i] != 0) {
                continue;
            } else {
                skipped_indices[i] = 1;
            }
            vector<string> temp;
            temp.push_back(strs[i]);
            for (int j = i + 1; j < size; j++) {
                if (strs[i].length() != strs[j].length()){ 
                    break;
                }
                if (skipped_indices[j] == 0) {
                    if (isAnagram(strs[i], strs[j])) {
                        temp.push_back(strs[j]);
                        skipped_indices[j] = 1;
                    }
                }
            }
            result.push_back(temp);
        }
        return result;
    }
};
