class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<=n-2; i++){
            int mini = i;
            for(int j=i; j<=n-1; j++){
                if(nums[j] < nums[mini]){
                    mini = j;
                }
            }
            int temp = nums[mini];
            nums[mini] = nums[i];
            nums[i] = temp;
        }
        return nums;
    }
};
