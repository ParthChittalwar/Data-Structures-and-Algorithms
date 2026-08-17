class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int x : nums) {
            freq[x]++;
        }

        vector<vector<int>> ans;
        for (auto& it : freq) {
            ans.push_back({it.first, it.second});
        }

        return ans;
    }
};