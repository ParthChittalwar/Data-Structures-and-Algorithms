class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n = nums.size();
        map<long long , int> m;
        long long sum = 0;
        int maxlen = 0;
        for(int i=0; i<n; i++){
            sum = sum + nums[i];
            if(sum == k){
                maxlen = max(maxlen, i + 1);
            }
            long long rem = sum - k;
            if(m.find(rem) != m.end()){
                int len = i - m[rem];
                maxlen = max(maxlen , len);
            }
            if(m.find(sum) == m.end()){
                m[sum] = i;
            }
        }
        return maxlen;
    }
};
