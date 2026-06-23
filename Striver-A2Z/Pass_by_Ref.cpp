class Solution{
public:
    void reverse(vector<int>& arr){
        int a = 0 , b = arr.size() - 1;
        while(a<=b){
            swap(arr[a],arr[b]);
            a++;
            b--;
        }
    }
};