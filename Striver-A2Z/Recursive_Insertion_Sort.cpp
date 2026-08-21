class Solution {
private: 
    void InsertionSort(vector<int> &nums ,int i , int n){
        if(i == n) return;
        int j = i;
        while(j>0 && nums[j-1]>nums[j]){
            int temp = nums[j];
            nums[j] = nums[j-1];
            nums[j-1] = temp;
            j--;
        }
        InsertionSort(nums , i+1 , n);

    }

public:
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size();
        InsertionSort(nums , 0 , n);
        return nums;
    }
};
