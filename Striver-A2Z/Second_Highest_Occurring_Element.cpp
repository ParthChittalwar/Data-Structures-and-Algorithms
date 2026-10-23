class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        unordered_map<int , int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }

        int maxfreq = 0;
        int secondmaxfreq = 0;

        for(int i=0; i<nums.size(); i++){
            int freq = m[nums[i]];

            if(freq > maxfreq ){
                secondmaxfreq = maxfreq;
                maxfreq = freq;
            }else if(freq < maxfreq && freq > secondmaxfreq){
                secondmaxfreq = freq;
            }
        }

        int ans = -1;
        for(int i=0; i<nums.size(); i++){
            if(secondmaxfreq == m[nums[i]]){
                if(ans == -1 || ans > nums[i]){
                    ans = nums[i];
                }
            }
        }

        return ans;
    }
};