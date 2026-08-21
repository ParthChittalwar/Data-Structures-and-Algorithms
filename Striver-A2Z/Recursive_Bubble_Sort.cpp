class Solution {
private:
    void BubbleSort(vector<int> &nums , int n){
        if(n <= 1) return;
        int swapped = 0;

        for(int i=0; i<n-1; i++){
            if(nums[i] > nums[i+1]){
                int temp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0) return;
        BubbleSort(nums , n-1);
    }

public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();
        BubbleSort(nums , n);
        return nums;
    }
};
