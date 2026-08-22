class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        set<int> st;
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }
        int index = 0;
        for(auto x : st){
            nums[index] = x;
            index++;
        }
        return index;
    }
};