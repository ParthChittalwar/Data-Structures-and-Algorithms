class Solution {
public:
    int countDigit(int n) {
        int count = 0;
        if(n == 0){
            return (count = 1);
        }else{
        while(n>0){
            int digit = n % 10;
            count = count + 1;
            n = n / 10;
        }
        return count;
        }
    }
};