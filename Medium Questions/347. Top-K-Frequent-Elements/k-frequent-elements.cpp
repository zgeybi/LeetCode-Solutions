class Solution {
public:
    static bool cmp (const pair<int, int>& first, const pair<int, int>& second) {
        return first.second > second.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> occurences;
        for (auto i : nums) {
            occurences[i]++;
        }
        vector<pair<int, int>> res (occurences.begin(), occurences.end());
        sort(res.begin(), res.end(), cmp);
        vector<int> temp;
        for (int i = 0; i < k; i++) {
            temp.push_back(res[i].first);
        }
        return temp;
    }
};
