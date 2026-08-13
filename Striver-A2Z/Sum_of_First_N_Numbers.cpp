class Solution{	
	public:
		int sum = 0;
        int NnumbersSum(int N){
			if(N==0) return sum;
            NnumbersSum(N - 1);
            sum = sum + N;
            return sum;
		}
};