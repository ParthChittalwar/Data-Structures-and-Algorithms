class Solution {
public:
    int largestElement(vector<int>& nums) {
        int n = nums.size();
        int large = INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i]>large){
                large = nums[i];
            }
        }
        return large;
    }
};