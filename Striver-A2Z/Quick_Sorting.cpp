class Solution {
private:
    int Partition(vector<int> &nums , int low , int high){
        int pivot = nums[low];
        int i = low;
        int j = high;
        while(i < j){
            while(nums[i] <= pivot && i <= high - 1){
                i++;
            }
            while(nums[j] > pivot && j >= low + 1){
                j--;
            }
            if(i < j){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
        int temp2 = nums[low];
        nums[low] = nums[j];
        nums[j] = temp2;

        return j;
    }

    void QuickSort(vector<int> &nums , int low , int high){
        if(low < high){
            int pIndex = Partition(nums , low , high);
            QuickSort(nums , low , pIndex - 1);
            QuickSort(nums , pIndex + 1 , high);
        }
    }

public:
    vector<int> quickSort(vector<int>& nums) {
        int n = nums.size();
        QuickSort(nums , 0 , n-1);
        return nums;
    }
};
