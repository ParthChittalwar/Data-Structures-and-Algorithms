class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
          unordered_map<int, int> freq;

        for (int x : nums) {
            freq[x]++;
        }

        int ans = nums[0];
        int maxFreq = 0;

        for (auto& it : freq) {
            int element = it.first;
            int count = it.second;

            if (count > maxFreq || 
               (count == maxFreq && element < ans)) {
                maxFreq = count;
                ans = element;
            }
        }

        return ans;
    }
};