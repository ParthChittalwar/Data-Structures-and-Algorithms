class Solution {
    public:
    int whileLoop(int d) {
        int count = 0;
        int sum = 0;
        int i = 1;
        while(count<50){
            if(i % 10 == d){
                count++;
                sum += i;
            }
            i++;
        }
        return sum;
    }
};