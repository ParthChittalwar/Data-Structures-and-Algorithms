class Solution {
public:
    int primeUptoN(int n) {
        int primecount = 0;
        if(n < 1) return 0;
        for(int i=2; i<=n; i++){
            int count = 0;
            for(int j=2; j<=sqrt(i); j++){
                if( i % j == 0) count++;
            }
            if(count == 0){
                primecount++;
            }
        }
        return primecount;
    }
};