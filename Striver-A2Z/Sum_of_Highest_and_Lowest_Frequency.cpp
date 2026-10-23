class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        unordered_map<int , int> m;

        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }

        int maxfreq = 0;
        int minfreq = INT_MAX;

        for(int i=0; i<nums.size(); i++){

            int freq = m[nums[i]];

            if(freq > maxfreq){
                maxfreq = freq;
            }
            if(freq < minfreq){
                minfreq = freq;
            }
        }

        int sum = maxfreq + minfreq;
        return sum; 
    }
};
