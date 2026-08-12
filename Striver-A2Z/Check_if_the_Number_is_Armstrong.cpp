class Solution {
public:
    bool isArmstrong(int n) {
        int num = n;
        int cnum = n;
        int count = 0;
        int arm = 0;
        if(n == 0){
            return true;
        }else{
            while(cnum>0){
              count = count + 1;
              cnum = cnum / 10;
            }
            while(n>0){
             int digit = n % 10;
             digit = pow(digit,count);
             arm = arm + digit;
             n = n / 10;
        }
             if( arm == num){
                return true;
             }else{
                return false;
            }
    } 
 } 
};