class Solution {
public:
    bool isPalindrome(int n) {
        int num = n;
        int rev = 0;
        while(n>0){
            int digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }
        if(num==rev){
            return true;
        }else{
            return false;
        }
    }
};