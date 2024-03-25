class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> hash;
        for (int k : nums) {
            if (hash.find(k) == hash.end()) {
                hash.insert({k, 0});
            } else {
                return true;
            }
        }
        return false;
    }
};