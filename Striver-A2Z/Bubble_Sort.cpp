class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();
        for(int i=n-1; i>=1; i--){
            int didswap = 0;
            for(int j=0; j<=i-1; j++){
                if(nums[j] > nums[j+1]){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                    didswap = 1;
                }
            }
            if(didswap == 0){
                break;
            }
        }
        return nums;
    }
};
