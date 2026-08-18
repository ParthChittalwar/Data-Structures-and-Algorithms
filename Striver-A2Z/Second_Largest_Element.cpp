class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int large = INT_MIN;
        int slarge = INT_MIN;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]>large){
                slarge = large;
                large = nums[i];
            }else if(nums[i] > slarge and nums[i] != large){
                    slarge = nums[i];
            }
        }
       if(slarge == INT_MIN) return slarge = -1;
       else return slarge;
        
    }
};