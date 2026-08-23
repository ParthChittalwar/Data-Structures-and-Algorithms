class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
       vector<int> vec;
        int i = 0, j = 0;

        while(i < nums1.size() && j < nums2.size()) {

            if(nums1[i] == nums2[j]) {
                if(vec.empty() || vec.back() != nums1[i])
                    vec.push_back(nums1[i]);

                i++;
                j++;
            }
            else if(nums1[i] < nums2[j]) {
                if(vec.empty() || vec.back() != nums1[i])
                    vec.push_back(nums1[i]);

                i++;
            }
            else {
                if(vec.empty() || vec.back() != nums2[j])
                    vec.push_back(nums2[j]);

                j++;
            }
        }

        while(i < nums1.size()) {
            if(vec.empty() || vec.back() != nums1[i])
                vec.push_back(nums1[i]);

            i++;
        }

        while(j < nums2.size()) {
            if(vec.empty() || vec.back() != nums2[j])
                vec.push_back(nums2[j]);

            j++;
        }

        return vec;
    }
};