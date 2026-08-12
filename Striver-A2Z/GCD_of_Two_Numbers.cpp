class Solution {
public:
    int GCD(int n1,int n2) {
        int g;
        if(n1>n2){
            g = n1;
        }else{
            g = n2;
        }
        for(int i=g ; i>=1 ; i--){
            if(n1 % i == 0 and n2 % i == 0){
                return i;
                break;
            }
        }
    }
};